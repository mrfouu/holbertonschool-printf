#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_int_or_dec - Imprime un entier ou un décimal
 * @args: Argument à imprimer
 * Return: Nombre de caractères imprimés
 */
int print_int_or_dec(va_list args)
{
	int number = va_arg(args, int);
	unsigned int num;
	int count = 0;
	int div = 1;
	if (number < 0)
	{
		_putchar('-');
		num = -number;
		count++;
	}
	else
	{
		num = number;
	}
	/* Calcul du diviseur pour le nombre*/
	while (num / div >= 10)
	{
		div *= 10;
	}
	/* Impression de chaque chiffre*/
	while (div > 0)
	{
		int digit = (num / div) % 10;
		_putchar(digit + '0');
		num %= div;
		div /= 10;
		count++;
	}
	return count;
}

