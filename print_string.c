#include "main.h"
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
}
