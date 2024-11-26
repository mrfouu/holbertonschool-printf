#include "main.h"
#include <stdarg.h>
/**
 * _printf - Produces output according to a format.
 *@format: The format string.
 * Return: The number of characters printed
 */

int _printf(const char format, ...)
{
	int counter = 0;
	va_list args;

	va_start(args, format);
	while (format)
	{
		if (*format == '%' && *(++format))
		{
			counter += (*format == 'c') ? print_char(va_arg(args, int))
				: (*format == 's') ? print_string(va_arg(args, char))
				: (*format == '%') ? (_putchar('%'), 1)
				: (*format == 'd' || *format == 'i') ?(print_int(va_arg(args, int)),1)
				: 0;
		}
		else
		{
			_putchar(*format);
			counter++;
		}
		format++;
	}
	va_end(args);
	return (counter);
}
