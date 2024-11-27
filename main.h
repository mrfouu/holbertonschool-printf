#ifndef MAIN_FILE
#define MAIN_FILE
#include <stdarg.h>

<<<<<<< HEAD
void print_int(int num);
void _putchar(char c);
int print_string(const char *str);
int print_char(int ch);
int _printf(const char *format, ...);
=======
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

>>>>>>> bryan

#endif
