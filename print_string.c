#include "main.h"
<<<<<<< HEAD

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
=======
#include <stddef.h>
#include <stdarg.h>

/**
 *print_string - print une chaine de caractères
 *@list: list tout ce que reçois le print
 *Return: retourne as 0
 */
int print_string(va_list list)
{
	int counter = 0;
	char *string;
	int i = 0;

	string = va_arg(list, char*);

	if (string == NULL)/* renvoie 0 si le string et vide*/
		return (0);

	while (string[i] != '\0')/*tourne tant que pas arriver au bit nul */
	{
		_putchar(string[i]);
		i++;
		counter++;
	}

return (counter);
>>>>>>> bryan
}
