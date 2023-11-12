#include "main.h"
/**
  * print_string - Prints a string
  *
  * @args: A list of variadic arguments
  *
  * Return: The length of the string
  */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str != NULL)
	{
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}

		return (i);
	}

	_putchar('(');
	_putchar('n');
	_putchar('u');
	_putchar('l');
	_putchar('l');
	_putchar(')');
	return (6);
}
