#include "main.h"

/**
  * recursion_binary - Prints a binary
  * @n: integer to print
  *
  */

void recursion_binary(int n)
{
	unsigned int i;

	i = n;
	if (i / 2)
		recursion_binary(i / 2);
	_putchar(i % 2 + '0');
}

/**
  * print_binary - Prints a binary
  * @args: A list of variadic arguments
  *
  * Return: The number of binary digits
  */

int print_binary(va_list args)
{
	unsigned int a = 0;
	int b = 0, c = 0;

	c = va_arg(args, int);
	a = c;
	if (c < 0)
	{
		_putchar('1');
		c = c * -1;
		a = c;
		b += 1;
	}
	while (a > 0)
	{
		a = a / 2;
		b++;
	}
	recursion_binary(c);
	return (b);
}
