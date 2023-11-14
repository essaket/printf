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
            _putchar('(');
            _putchar('n');
            _putchar('i');
            _putchar('l');
            _putchar(')');
            return (6);
        }

	a = (unsigned long int)pnt;
	_putchar('0');
	_putchar('x');
	b = print_hex_plus(a);
	return (b + 2);
}
