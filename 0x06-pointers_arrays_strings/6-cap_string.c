#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to modify
 *
 * Return: pointer to modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		capitalize_next = 0;

		for (int j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				capitalize_next = 1;
				break;
			}
		}
		i++;
	}
	return (str);
}
