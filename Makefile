CC = gcc
CFLAGS = -Wall -Werror

SRC_DIR = src
TEST_DIR = test
UNITY_DIR = Unity/src

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
TEST_FILES = $(wildcard $(TEST_DIR)/*.c)
UNITY_FILES = $(UNITY_DIR)/unity.c

.PHONY: all clean test

all: main

main: $(SRC_FILES)
	$(CC) $(CFLAGS) -o $@ $^

test: $(SRC_FILES) $(TEST_FILES) $(UNITY_FILES)
	$(CC) $(CFLAGS) -o test_runner $^ -I$(SRC_DIR) -I$(UNITY_DIR)
	./test_runner

clean:
	rm -f main test_runner
