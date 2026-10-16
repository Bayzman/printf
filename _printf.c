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
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			count++;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			k = print_string(va_arg(args, char *));
			count = count + k;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			count++;
			i++;
		}
		else
		{
			if (format[i + 1] == '\0')
			{
				;
			}
			else
			{
				_putchar('%');
				count++;
			}
		}
	}
	va_end(args);
	return (count);
}
