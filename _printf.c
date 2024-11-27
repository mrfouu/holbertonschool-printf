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
<<<<<<< HEAD
			counter += (*format == 'c') ? print_char(va_arg(args, int))
				: (*format == 's') ? print_string(va_arg(args, const char *))
				: (*format == '%') ? (_putchar('%'), 1)
				: (*format == 'd' || *format == 'i') ? (print_int(va_arg(args, int)), 1)
				: 0;
		}
		else
		{
			_putchar(*format);
=======
			_putchar(format[i]);
>>>>>>> bryan
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
	counter -= 1;
	return (counter);
}
