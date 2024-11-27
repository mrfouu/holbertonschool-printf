#ifndef MAIN_FILE
#define MAIN_FILE
#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_int_or_dec(va_list args);
int (*get_function(const char *format))(va_list list);
int _putchar(char c);
/*
 * struct specifier - structure comparée et appelle la function
 * @letter: compare letter a format
 * @function: appelle la function pour print
 */

typedef struct specifier
{
	char *letter;
	int (*function)(va_list argument);

} spec;


#endif
