#include "main.h"

/**
 * _printf - custom printf function
 * @format: format string
 * Return: number of characters in the string (int)
 */
int _printf(const char *format, ...)
{
	int i, count, k;
	va_list args;

	count = 0;
	if (format == NULL)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			if (format[i + 1] == '\0')
			{
				va_end(args);
				return (-1);
			}

			k = handle_specifier(format[i + 1], args);
			if (k == -1)
			{
				va_end(args);
				return (-1);
			}
			count += k;
			i++;
		}
	}

	return (count);
}
