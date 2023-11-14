#include "main.h"

/**
 * print_String - function that print a String
 *
 * @args: input argument
 *
 * Return: an int
*/

int print_String(va_list args)
{
	char *s;
	int i, len = 0;
	int cast;

	s = va_arg(args, char *);
	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = s[i];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_hex_plus(cast);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
	}

	_putchar('(');
	_putchar('n');
	_putchar('u');
	_putchar('l');
	_putchar('l');
	_putchar(')');
	return (6);
}
