#include "main.h"
/**
 * print_int - imprimer un entier
 * @num: entier à imprimer
 *
 */
void print_int(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		print_int(num / 10);
	}
	_putchar('0' + (num % 10));
}
