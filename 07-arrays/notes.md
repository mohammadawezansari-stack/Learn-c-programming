# Lesson 7: Arrays

## What is an array?
An array stores multiple values of the same type in one variable, 
placed next to each other in memory. Instead of creating 
`num1`, `num2`, `num3`, you can create one array that holds all of them.

## Declaring an array
```c
int numbers[5];
```
This creates an array that can hold 5 integers.

## Declaring with values
```c
int numbers[5] = {10, 20, 30, 40, 50};
```

## Accessing array elements
Arrays start counting from **0**, not 1:
```c
printf("%d\n", numbers[0]); // prints 10
printf("%d\n", numbers[2]); // prints 30
```

## Changing a value
```c
numbers[1] = 99; // changes 20 to 99
```

## Looping through an array
Arrays are almost always used together with a `for` loop:
```c
for (int i = 0; i < 5; i++) {
    printf("%d\n", numbers[i]);
}
```

## Example program
See `arrays.c` in this folder for the code.

## How to run it
1. Open a terminal in this folder
2. Compile it:
3. Run it:
   ## Exercise
Create an array of 5 of your favorite numbers, then write a 
loop that prints their sum.
