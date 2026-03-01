#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Description: Prints a-z using _putchar, followed by a new line
 * Only uses _putchar twice (once in loop, once for newline)
 *
 * Return: void
 */
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
