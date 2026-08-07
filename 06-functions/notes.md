# Lesson 6: Functions

## What is a function?
A function is a reusable block of code that performs a specific 
task. Instead of writing the same code repeatedly, you write it 
once as a function and call it whenever needed.

## Why use functions?
- Avoids repeating code
- Makes programs easier to read and organize
- Lets you break a big problem into smaller pieces

## Function syntax
```c
returnType functionName(parameters) {
    // code
    return value;
}
```

## Example: a simple function
```c
int add(int a, int b) {
    return a + b;
}
```
This function takes two numbers, adds them, and returns the result.

## Calling a function
```c
int result = add(5, 3);
printf("%d\n", result);
```

## void functions
If a function doesn't return anything, use `void`:
```c
void greet() {
    printf("Hello!\n");
}
```

## Example program
See `functions.c` in this folder for the code.

## How to run it
1. Open a terminal in this folder
2. Compile it:
3. Run it:

   ## Exercise
Write a function called `multiply` that takes two numbers and 
returns their product. Call it from `main()` and print the result.
