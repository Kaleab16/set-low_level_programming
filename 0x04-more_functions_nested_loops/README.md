# 0x04 - More Functions & Nested Loops

## Task 0: _isupper

Function that checks for uppercase characters.

### Prototype
int _isupper(int c);

### Return
- Returns 1 if c is uppercase
- Returns 0 otherwise

### Example
int main(void)
{
    printf("%d\n", _isupper('A')); // Output: 1
    printf("%d\n", _isupper('a')); // Output: 0
    return (0);
}

### Compilation
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper

### Files
- 0-isupper.c - Function implementation
- main.h - Header file with prototype
- README.md - Documentation
