#include "main.h"

/**
 * print_address - function that prints address
 *
 * @args: list of argument
 *
 * Return: number of characters
*/

int print_address(va_list args)
{
	void *pnt;
	long int a;
	int b;

	pnt = va_arg(args, void*);
	if (pnt == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		return (5);
	}

	a = (unsigned long int)pnt;
	_putchar('0');
	_putchar('x');
	b = print_hex_plus(a);
	return (b + 2);
}
