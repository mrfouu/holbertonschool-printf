#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * print_char - ecrit un caractère contenu dans  va_list
 * @list: la liste analysée
 * Return: 1
 */

int print_char(va_list list)
{
	char character;

	character = va_arg(list, int);
	_putchar(character);

return (1);
}
