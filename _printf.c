#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - Produces output according to a format.
 *@format: The format string.
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int counter = 0;
	va_list args;
	unsigned int i = 0;
	int (*function)(va_list);

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == 0))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c' || format[i + 1] == 'd' ||
			format[i + 1] == '%' || format[i + 1] == 'i' ||
			format[i + 1] == 's'|| format[i + 1] == 'b')
			{
				i++;
				function = get_function(&format[i]);
				counter += function(args);
			}

			else
			{
				_putchar(format[i]);
				counter++;
			}
		}
		else
		{
			_putchar(format[i]);
			counter++;
		}
		i++;
	}
	va_end(args);
	return (counter);
}
