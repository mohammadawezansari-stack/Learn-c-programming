# Lesson 5: Loops

## What is a loop?
A loop lets you repeat a block of code multiple times, instead 
of writing it out over and over.

## for loop
Best when you know how many times you want to repeat:
```c
for (int i = 1; i <= 5; i++) {
    printf("%d\n", i);
}
```
It has three parts: starting value (`i = 1`), condition to keep 
going (`i <= 5`), and what happens after each loop (`i++`).

## while loop
Best when you don't know exactly how many times, but you have 
a condition to check each time:
```c
int i = 1;
while (i <= 5) {
    printf("%d\n", i);
    i++;
}
```

## do...while loop
Like `while`, but it always runs at least once — the condition 
is checked *after* the code runs:
```c
int i = 1;
do {
    printf("%d\n", i);
    i++;
} while (i <= 5);
```

## break and continue
- `break` — exits the loop immediately
- `continue` — skips to the next round of the loop

## Example program
See `loops.c` in this folder for the code.

## How to run it
1. Open a terminal in this folder
2. Compile it:
3. Run it:

   ## Exercise
Write a loop that prints only the even numbers from 1 to 20.
