#include "main.h"

/**
 * print_string - prints strings using _putchar
 * @str: string to be printed
 * Return: length of printed string
 */
int print_string(char *str)
{
	int i;

	i = 0;

	if (str == NULL)
	{
		str = "(null)";
		while (str[i] != '\0')
		{
			_putchar(str[i]);
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
