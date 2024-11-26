#include "main.h"
/**
 *
 */
int print_string(const char str)
{
	int count = 0;

	while (str)
	{
		_putchar(*str++);
		count++;
	}
	return (count);
}
