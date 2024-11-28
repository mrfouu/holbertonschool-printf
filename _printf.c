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

	if (format == NULL)
		return (0);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
		}

		else
		{
			i++;
			function = get_function(&format[i]);
			counter += function(args);
		}
		i++;
	}
	va_end(args);
	counter -= 0;
	return (counter);
}
