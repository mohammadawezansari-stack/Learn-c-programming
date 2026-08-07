# Lesson 11: Dynamic Memory (malloc & free)

## The problem with regular arrays
When you write `int numbers[5];`, you must know the size in 
advance, and it can't change later. Dynamic memory lets you 
create arrays whose size is decided while the program is running, 
and even resized if needed.

## The malloc function
`malloc` (memory allocation) reserves a block of memory and 
returns a pointer to it:
```c
int *ptr = malloc(5 * sizeof(int));
```
This reserves enough space for 5 integers. `sizeof(int)` tells 
C how many bytes one integer needs.

## Always check if malloc succeeded
Memory isn't unlimited — malloc can fail:
```c
if (ptr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
}
```

## Using the allocated memory
Once allocated, you can use it just like a normal array:
```c
ptr[0] = 10;
ptr[1] = 20;
printf("%d\n", ptr[0]);
```

## The free function
Memory you allocate with malloc doesn't clean itself up — you 
must release it manually when you're done, or your program 
"leaks" memory:
```c
free(ptr);
```

## Golden rule
Every `malloc` should have a matching `free`. Forgetting this 
is one of the most common bugs in C programs.

## Example program
See `dynamic_memory.c` in this folder for the code.

## How to run it
1. Open a terminal in this folder
2. Compile it:
3. Run it:
   ## Exercise
Use malloc to create space for 10 integers, fill them with the 
numbers 1 to 10 using a loop, print them, then free the memory.
