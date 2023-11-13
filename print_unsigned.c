#include "main.h"
/**
 * print_unsigned - prints an unsigned integer
 * @args: arguments list
 * Return: integer
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int a, b, r, c = 1, i = 1;

	r = n % 10;
	n = n / 10;
	a = n;

	if (r < 0)
	{
		_putchar('-');
		a = -a;
		n = -n;
		r = -r;
		i++;
	}
	if (a > 0)
	{
		while (a / 10 != 0)
		{
			c = c * 10;
			a = a / 10;
		}
		a = n;
		while (c > 0)
		{
			b = a / c;
			_putchar(b + '0');
			a = a - (b * c);
			c = c / 10;
			i++;
		}
	}
	_putchar(r + '0');

	return (i);
}
