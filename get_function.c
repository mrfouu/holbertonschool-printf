#include "main.h"
#include <stddef.h>
#include <stdarg.h>
/**
 * get_function - verifieleformatavecleformatetappellafocntionsdemander
 * @format: le format apres "%"
 * Return:lalongueurducaractèreàimprimerou«0»sinousn'avonsrien
 */


int (*get_function(const char *format))(va_list)
{
	spec check[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_int_or_dec},
		{"d", print_int_or_dec},
		{"b", convert_int_binary},
		{NULL, NULL}
	};
	int i;

	for (i = 0; check[i].letter; i++)
	{
		if (*(check[i].letter) == *format)
			return (check[i].function);
	}
	return (NULL);
}
