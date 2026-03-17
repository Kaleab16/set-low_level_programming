#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Description: Prints a-z ten times using _putchar
 * Only uses _putchar twice (once in inner loop, once for newline)
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char letter;
int count;

for (count = 0; count < 10; count++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
