#include "main.h"

void recursion_int(int n);

/**
  * print_digit - Prints a integer
  * @args: A list of variadic arguments
  *
  * Return: The length of the string
  */
int print_digit(va_list args)
{
	int count = 1, m = 0;
	unsigned int n = 0;

	n = va_arg(args, int);
	m = n;
	if (m < 0)
	{
		_putchar('-');
		m = m * -1;
		n = m;
		count += 1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}

	recursion_int(m);
	return (count);
}

/**
  * recursion_int - Prints a integer
  * @n: integer to print
  *
  * Return: Nothing
  */
void recursion_int(int n)
{
	unsigned int l;

	l = n;
	if (l / 10)
		recursion_int(l / 10);
	_putchar(l % 10 + '0');
}
