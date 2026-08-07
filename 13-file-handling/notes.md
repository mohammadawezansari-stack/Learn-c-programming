# Lesson 13: File Handling

## Why file handling?
So far, all your data disappears when the program ends. File 
handling lets you save data to a file, and read it back later — 
even after closing and reopening your program.

## The FILE pointer
C uses a special type called `FILE` to represent an open file:
```c
FILE *fptr;
```

## Opening a file
```c
fptr = fopen("data.txt", "w");
```
The second argument is the mode:
- `"w"` — write (creates file, erases existing content)
- `"r"` — read
- `"a"` — append (adds to the end without erasing)

## Always check if the file opened
```c
if (fptr == NULL) {
    printf("Could not open file\n");
    return 1;
}
```

## Writing to a file
```c
fprintf(fptr, "Hello, file!\n");
```
Works just like `printf`, but writes to the file instead of the screen.

## Closing a file
Always close a file when you're done — this saves your changes:
```c
fclose(fptr);
```

## Reading from a file
```c
FILE *fptr = fopen("data.txt", "r");
char line[100];
fgets(line, 100, fptr);
printf("%s", line);
fclose(fptr);
```

## Example program
See `file_handling.c` in this folder for the code.

## How to run it
1. Open a terminal in this folder
2. Compile it:
3. Run it:
4. Check the folder — a new file called `data.txt` will appear

## Exercise
Modify the program to write 3 lines to the file instead of 1, 
then read and print all 3 lines back.

   
