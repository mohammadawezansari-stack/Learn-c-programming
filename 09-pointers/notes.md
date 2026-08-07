# Lesson 9: Pointers

This is the lesson most beginners find hardest — take your time, 
re-read if needed, and try the code yourself rather than just 
reading it.

## What is a pointer?
Every variable is stored somewhere in your computer's memory, 
and that location has an address. A pointer is a variable that 
stores the *address* of another variable, instead of storing a 
value directly.

## The two key symbols
- `&` — "address of" — gives you the address of a variable
- `*` — "dereference" — gives you the value stored at an address

## Declaring a pointer
```c
int age = 20;
int *ptr = &age;
```
Here, `ptr` doesn't hold `20` — it holds the *address* where 
`age` is stored.

## Using a pointer
```c
printf("Value of age: %d\n", age);
printf("Address of age: %p\n", &age);
printf("Value stored in ptr: %p\n", ptr);
printf("Value ptr points to: %d\n", *ptr);
```
`ptr` and `&age` will print the same address. `*ptr` will print 
`20` — the value at that address.

## Changing a value through a pointer
```c
*ptr = 25;
printf("%d\n", age); // now prints 25
```
Changing `*ptr` changes `age` itself, because they point to the 
same memory location.

## A simple way to think about it
Imagine `age` is a house, and its address is the house number. 
`&age` gives you that house number. A pointer is a piece of 
paper with that house number written on it. `*ptr` means 
"go to the house at this number and look inside."

## Example program
See `pointers.c` in this folder for the code.

## How to run it
1. Open a terminal in this folder
2. Compile it:
3. Run it:
## Exercise
Create a variable called `score`, create a pointer to it, then 
use the pointer to change the value of `score` to something new. 
Print `score` before and after to confirm it changed.
