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
	char p = va_arg(args, int);

	_putchar(p);

	return (1);
}
