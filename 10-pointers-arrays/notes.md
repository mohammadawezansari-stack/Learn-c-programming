# Lesson 10: Pointers and Arrays

## The key connection
In C, an array's name is actually a pointer to its first element. 
This is why arrays and pointers are so closely linked — once you 
understand pointers, arrays make even more sense.

## Array name as a pointer
```c
int numbers[5] = {10, 20, 30, 40, 50};
int *ptr = numbers;
```
Notice: no `&` needed here. `numbers` already means "the address 
of the first element."

## Accessing array elements two ways
```c
printf("%d\n", numbers[0]); // normal way
printf("%d\n", *ptr);       // pointer way — same result
```

## Moving through an array with pointer arithmetic
Adding 1 to a pointer moves it to the *next* element (not the 
next byte — C is smart about the size of the data type):
```c
printf("%d\n", *(ptr + 1)); // same as numbers[1]
printf("%d\n", *(ptr + 2)); // same as numbers[2]
```

## Looping using a pointer
```c
for (int i = 0; i < 5; i++) {
    printf("%d\n", *(ptr + i));
}
```
This does exactly the same thing as looping with `numbers[i]`.

## Why this matters
Understanding this connection helps later when you pass arrays 
into functions — C actually passes the pointer, not a full copy 
of the array. That's a topic for a later lesson, but this is 
the foundation for it.

## Example program
See `pointers_arrays.c` in this folder for the code.

## How to run it
1. Open a terminal in this folder
2. Compile it:
3. Run it:
   ## Exercise
Create an array of 5 numbers, then print every element using 
only pointer arithmetic (`*(ptr + i)`), not `array[i]`.
