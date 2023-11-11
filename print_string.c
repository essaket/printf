#include "main.h"

/**
 * print_string - print string.
 *
 * @args: argument.
 *
 * Return: character count.
 */

int print_string(va_list args)
{
	int counter = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	if (str[0] == '\0')
		return (-1);

	while (*str)
		counter += _putchar(str++);

	return (counter);
}
