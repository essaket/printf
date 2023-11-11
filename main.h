#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct parametres - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct parametres
{
	char s;
	int (*f)(va_list);
} parametres_p;

int _printf(const char *format, ...);
int get_function(char s, va_list args);
int _putchar(char c);
int print_char(va_list args);
int print_digit(va_list args);
int print_perc(va_list args);
int print_string(va_list args);

#endif
