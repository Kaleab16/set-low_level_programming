#include "main.h"

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argc;
	for (i = 0; argv[i] != NULL; i++)
		printf("%s\n", argv[i]);
	return (0);
}
