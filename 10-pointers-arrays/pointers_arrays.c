#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    printf("Using array index:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    printf("Using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(ptr + i));
    }

    return 0;
}
