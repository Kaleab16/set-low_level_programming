# 0x09. C - Static Libraries

A static library in C containing implementations of standard functions.

## Description
This project contains a static library `libmy.a` built from custom implementations of standard C functions.

## Functions Included
- `_putchar` - writes a character to stdout
- `_islower` - checks for lowercase letter
- `_isalpha` - checks for alphabetic character
- `_abs` - computes absolute value of an integer
- `_isupper` - checks for uppercase letter
- `_isdigit` - checks for digit character
- `_strlen` - returns length of a string
- `_puts` - prints a string to stdout
- `_strcpy` - copies a string
- `_atoi` - converts string to integer
- `_strcat` - concatenates two strings
- `_strncat` - concatenates n bytes of two strings
- `_strncpy` - copies n bytes of a string
- `_strcmp` - compares two strings
- `_memset` - fills memory with a constant byte
- `_memcpy` - copies memory area
- `_strchr` - locates character in string
- `_strspn` - gets length of a substring
- `_strpbrk` - searches string for any of a set of bytes
- `_strstr` - locates a substring

## Compilation
gcc -std=gnu89 main.c -L. -lmy -o output

## Author
Kaleab Yilma
