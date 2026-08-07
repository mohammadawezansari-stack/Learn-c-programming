#include <stdio.h>

int main() {
    // for loop
    printf("For loop:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    // while loop
    printf("While loop:\n");
    int j = 1;
    while (j <= 5) {
        printf("%d\n", j);
        j++;
    }

    // do-while loop
    printf("Do-while loop:\n");
    int k = 1;
    do {
        printf("%d\n", k);
        k++;
    } while (k <= 5);

    return 0;
}
