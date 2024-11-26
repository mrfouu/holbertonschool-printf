#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 *_printf - produit la sortie selon le format
 *@format: Chaine de format
 *Return:nombre de caractère imprimé
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
int _printf(const char *format, ...)
{
	int counter = 0;
	va_list args;

	va_start(args, format);
	while (format)
	{
		if (format == '%')
		{
			format++;
			if
			(format == '%');
			{
				_putchar('%');
				count++;
			}
			else if (format == 'c')
			{
				int ch = va_arg(args, int);

				_putchar(ch);
				count++;
			}
			else if (format == 's')
			{
				charstr = va_arg(args, char);
				while (str)
				{
					_putchar(*str);
					str++;
					count++;
				}
			}
			else
			{
				_putchar(format);
				count++;
			}
			format++;
		}
		va_end(args);
		return (count);
		}
}
