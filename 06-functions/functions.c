#include <stdio.h>

// Function that returns a value
int add(int a, int b) {
    return a + b;
}

// Function that returns nothing
void greet() {
    printf("Hello from a function!\n");
}

int main() {
    greet();

    int result = add(5, 3);
    printf("5 + 3 = %d\n", result);

    return 0;
}
