#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * print_binary - Converts an integer to binary and prints it
 * @args: List of arguments
 * Return: The number of characters printed
 */

int convert_int_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[32];
	int i = 0, count = 0;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		buffer[i++] = (num % 2) + '0'; /* Stocker le bit en tant que caractÃre */
		num /= 2;
	}

	while (i > 0)
	{
		_putchar(buffer[--i]); /* Imprimer les bits dans l'ordre inverse */
		count++;
    	}

	return (count);
}
