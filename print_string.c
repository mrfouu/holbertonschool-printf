#include "main.h"

/**
 * print_string - Imprime une chaîne de caractères.
 * @str: Pointeur vers la chaîne de caractères à imprimer.
 *
 * Return: Le nombre de caractères imprimés.
 */
int print_string(const char *str)
{
	int count = 0;
	
	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return count;
}
