#include "main.h"

/**
 * print_perc - print %.
 *
 * @args: arguments.
 *
 * Return: count of chars.
 */

int print_perc(va_list args)
{
	char *str = va_list(args, char *);
	int c = 0;

	if (*str == '%')
		c += _putchar ('%');
	if (*str)
		c += _putchar(*str++);

	return (c);
}
