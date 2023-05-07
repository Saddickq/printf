This is a collaboration project.

Partners work together to create a printf function that works like the one from the standard library

/*********** files *********/
1. putchar.c: This file takes one input parameter and print a single character to standard output.

2. print-string.c: This program is for printing a string when the character after '\0' is 's' it uses a pointerr to take in input if input string is NULL it prints "(null)" instead.

3. putstr.c: This code print an array of characters it used in the printf function to print "(null)" when the format specifer is 's' and the string pointing to the parameter.

4. printf.c: This function takes in variable araguments and a constant *format. it determines to print to a string, a character or a number if the format specifier is '%s, $c, %d' respectively.
