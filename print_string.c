#include "main.h"

/**
 * print_string - prints strings using _putchar
 * @str: string to be printed
 * Return: length of printed string
 */
int print_string(char *str)
{
	int i;
	char *null;

	i = 0;
	null = "(null)";

	if (str == NULL)
	{
		while (null[i] != '\0')
		{
			_putchar(null[i]);
			i++;
		}
		return (i);
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
