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

	return (write(1, &p, 1));
}
