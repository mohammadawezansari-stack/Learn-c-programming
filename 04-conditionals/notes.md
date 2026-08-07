# Lesson 4: Conditionals

## What is a conditional?
A conditional lets your program make decisions — running 
different code depending on whether a condition is true or false.

## if statement
Runs a block of code only if the condition is true:
```c
if (age >= 18) {
    printf("You are an adult.\n");
}
```

## if...else statement
Runs one block if true, another if false:
```c
if (age >= 18) {
    printf("You are an adult.\n");
} else {
    printf("You are a minor.\n");
}
```

## else if
Checks multiple conditions in order:
```c
if (marks >= 90) {
    printf("Grade A\n");
} else if (marks >= 75) {
    printf("Grade B\n");
} else {
    printf("Grade C\n");
}
```

## switch statement
Useful when comparing one variable against many exact values:
```c
switch (day) {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    default:
        printf("Another day\n");
}
```
Note: don't forget `break` after each case, or C will "fall through" 
and run the next case too.

## Example program
See `conditionals.c` in this folder for the code.

## How to run it
1. Open a terminal in this folder
2. Compile it:
3. Run it:

 
 ## Exercise
Write a program that takes a number and prints whether it's 
positive, negative, or zero using if/else if/else.
