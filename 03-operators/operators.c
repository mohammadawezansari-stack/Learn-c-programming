#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    // Arithmetic
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);

    // Comparison
    printf("Is a greater than b? %d\n", a > b);

    // Logical
    printf("Is a > 5 AND b < 5? %d\n", (a > 5) && (b < 5));

    return 0;
}
