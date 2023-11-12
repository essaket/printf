#include "main.h"
#include <unistd.h>

/**
 * print_perc - print %.
 *
 * @args: arguments.
 *
 * Return: count of chars.
 */

int print_perc(va_list args)
{
	(void)args;

	_putchar('%');

	return (1);
}
