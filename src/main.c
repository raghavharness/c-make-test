#include <stdio.h>
#include "my_math.h"

int main() {
    int result_add = add(10, 5);
    int result_subtract = subtract(10, 5);

    printf("Addition: %d\n", result_add);
    printf("Subtraction: %d\n", result_subtract);

    return 0;
}
