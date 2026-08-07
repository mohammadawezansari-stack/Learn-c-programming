#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int age;
    char grade;
};

int main() {
    struct Student s1;
    strcpy(s1.name, "Awez");
    s1.age = 21;
    s1.grade = 'A';

    struct Student s2 = {"Sara", 19, 'B'};

    printf("Student 1: %s, Age: %d, Grade: %c\n", s1.name, s1.age, s1.grade);
    printf("Student 2: %s, Age: %d, Grade: %c\n", s2.name, s2.age, s2.grade);

    return 0;
}
