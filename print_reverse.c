#include "main.h"

/**
 * print_reverse - function that prints a str in reverse
 * @args: arguments list.
 *
 * Return: integer of the characters
 */
int print_reverse(va_list args)
{

	char *str = va_arg(args, char*);
	int i, j = 0;

	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(str[i]);
	return (j);
}
