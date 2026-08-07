#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("First number: %d\n", numbers[0]);
    printf("Third number: %d\n", numbers[2]);

    numbers[1] = 99;
    printf("Updated second number: %d\n", numbers[1]);

    printf("All numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
