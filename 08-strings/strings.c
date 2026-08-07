#include <stdio.h>
#include <string.h>

int main() {
    char name[20] = "Awez";

    printf("Name: %s\n", name);
    printf("Length: %lu\n", strlen(name));

    char greeting[30];
    strcpy(greeting, "Hello, ");
    strcat(greeting, name);
    printf("%s\n", greeting);

    return 0;
}
