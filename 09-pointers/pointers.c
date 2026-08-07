#include <stdio.h>

int main() {
    int age = 20;
    int *ptr = &age;

    printf("Value of age: %d\n", age);
    printf("Address of age: %p\n", (void*)&age);
    printf("Value stored in ptr: %p\n", (void*)ptr);
    printf("Value ptr points to: %d\n", *ptr);

    *ptr = 25;
    printf("Age after changing through pointer: %d\n", age);

    return 0;
}
