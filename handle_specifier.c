#include "main.h"

/**
 * handle_specifier - handles different format specifiers
 * @specifier: character for the specifier
 * @args: arguments
 * Return: number of characters printed
 */
int handle_specifier(char specifier, va_list args)
{
	int count, k;

	count = 0;

	if (specifier == 'c')
	{
		_putchar(va_arg(args, int));
		count++;
	}
	else if (specifier == 's')
	{
		k = print_string(va_arg(args, char *));
		count += k;
	}
	else if (specifier == '%')
	{
		_putchar('%');
		count++;
	}
	else if (specifier == 'd' || specifier == 'i')
	{
		_putchar(va_arg(args, int));
		count ++;
	}
	else
	{
		if (specifier == '\0')
		{
			return (-1);
		}
		else
		{
			_putchar('%');
			count++;
		}
	}

	return (count);
}
