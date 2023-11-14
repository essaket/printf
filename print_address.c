#include "main.h"

/**
 * print_address - function that prints address
 *
 * @args: list of argument
 *
 * * Return: number of char
*/

int print_address(va_list args)
{
	void *pnt;
	char *nul = "(nil)";
	long int a;
	int b;
	int i;

	pnt = va_arg(args, void*);
	if (pnt == NULL)
	{
		for (i = 0; nul[i] != '\0'; i++)
		{
			_putchar(nul[i]);
		}
		return (i);
	}

	a = (unsigned long int)pnt;
	_putchar('0');
	_putchar('x');
	b = print_hex_plus(a);
	return (b + 2);
}
