#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Zero:[%d]\n", 0);
    _printf("INT_MIN:[%d]\n", INT_MIN);
    printf("INT_MIN:[%d]\n", INT_MIN);
    _printf("INT_MAX:[%d]\n", INT_MAX);
    printf("INT_MAX;[%d]\n", INT_MAX);
    _printf("Multiline test:\nFirst line\nSecond line\n");
    printf("Multiline test:\nFirst line\nSecond line\n");
    /* Vérification de la longueur totale des caractères imprimés */
    len = _printf("Check length: [%d]\n", 12345);
    len2 = printf("Check length: [%d]\n", 12345);
    	if (len == len2)
		printf("Success: Lengths match! _printf: %d, printf: %d\n", len, len2);
    	else
		printf("Error: Lengths differ! _printf: %d, printf: %d\n", len, len2);

    len = _printf("Negative number: [%d]\n", -54321);			    
    len2 = printf("Negative number: [%d]\n", -54321);
	if (len == len2)
		printf("Success: Lengths match! _printf: %d, printf: %d\n", len, len2);
	else
		printf("Error: Lengths differ! _printf: %d, printf: %d\n", len, len2);

    len = _printf("Zero: [%d]\n", 0);
    len2 = printf("Zero: [%d]\n", 0);
	if (len == len2)
		printf("Success: Lengths match! _printf: %d, printf: %d\n", len, len2);
	else
		printf("Error: Lengths differ! _printf: %d, printf: %d\n", len, len2);
    return (0);
}
