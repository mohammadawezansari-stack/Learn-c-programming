#include <stdio.h>

int main() {
    // Writing to a file
    FILE *fptr = fopen("data.txt", "w");

    if (fptr == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    fprintf(fptr, "Hello, file!\n");
    fclose(fptr);

    // Reading from the file
    fptr = fopen("data.txt", "r");
    char line[100];
    fgets(line, 100, fptr);
    printf("Read from file: %s", line);
    fclose(fptr);

    return 0;
}
