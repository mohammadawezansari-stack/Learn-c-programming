# Lesson 12: Structs

## What is a struct?
A struct lets you group different types of related data together 
under one name. For example, a "student" has a name, an age, and 
a grade — a struct can hold all three in one place.

## Defining a struct
```c
struct Student {
    char name[20];
    int age;
    char grade;
};
```

## Creating a struct variable
```c
struct Student s1;
```

## Accessing and setting struct fields
Use the dot (`.`) operator:
```c
strcpy(s1.name, "Awez");
s1.age = 21;
s1.grade = 'A';

printf("%s\n", s1.name);
printf("%d\n", s1.age);
```

## Creating with values directly
```c
struct Student s2 = {"Sara", 19, 'B'};
```

## Why structs matter
Without a struct, you'd need separate arrays for names, ages, 
and grades, and keep track of which index belongs to which 
person. A struct keeps everything about one student together.

## Example program
See `structs.c` in this folder for the code.

## How to run it
1. Open a terminal in this folder
2. Compile it:
3. Run it:
   ## Exercise
Create a struct called `Book` with a title, an author, and a 
price. Create one book, fill in its details, and print them.
