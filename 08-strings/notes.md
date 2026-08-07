# Lesson 8: Strings

## What is a string in C?
Unlike some languages, C doesn't have a built-in string type. 
A string is just an array of characters, ending with a special 
character called the null terminator (`\0`) that marks where 
the string ends.

## Declaring a string
```c
char name[20] = "Awez";
```
This creates an array of 20 characters, with "Awez" stored in it 
followed automatically by `\0`.

## Printing a string
```c
printf("%s\n", name);
```
Note: `%s` is the format specifier for strings (different from 
`%d` for numbers or `%c` for a single character).

## Reading a string from the user
```c
char name[20];
scanf("%s", name);
```
Note: no `&` needed before `name` here — arrays already act like 
a pointer to their first element (we'll explain this fully in 
the pointers lesson).

## Common string functions
C's `string.h` library gives you useful tools:
- `strlen(name)` — get the length of a string
- `strcpy(dest, src)` — copy one string into another
- `strcat(dest, src)` — join two strings together
- `strcmp(a, b)` — compare two strings (returns 0 if equal)

## Example program
See `strings.c` in this folder for the code.

## How to run it
1. Open a terminal in this folder
2. Compile it:
3. Run it:
   ## Exercise
Ask the user to enter their name using scanf, then print a 
greeting message using their name.
