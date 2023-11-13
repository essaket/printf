#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct parametres - struct for finding functions
 * @specifier: character of specifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct parametres
{
	char *specifier;
	int (*f)(va_list args);
} specifiers_p;

int _printf(const char *format, ...);
int check_specifier(char c);
int invalid_specifier(char prev_chara, char chara, int count);
int get_function(char format, va_list args);
int _putchar(char c);
int print_char(va_list args);
int print_digit(va_list args);
int print_string(va_list args);
int print_binary(va_list args);
void recursion_binary(int n);
int print_unsigned(va_list args);
int print_octal(va_list val);
int print_hex(va_list args);
int print_hex_plus(unsigned long int n);
int print_HEX(va_list args);
<<<<<<< HEAD
int print_address(va_list args);
=======
int print_HEX_plus(unsigned int n);
>>>>>>> dc7b7021d08884b5868d0bab76b66d9667486f37

#endif
