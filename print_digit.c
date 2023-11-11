#include "main.h"

/**
 * print_digit - print integers.
 *
 * @args: list of argument.
 *
 * Return: count of chars.
 */

int print_digit(va_list args)
{
	int dec = 1;
	int counter = 0;
	long int digit = va_arg(args, int);
	long int digits;

	if (digit < 0)
	{
		counter += _putchar('-');
		digit *= -1;
	}

	if (digit < 10)
		return (counter += _putchar(digit + '0'));

	digits = digit;

	while (digits > 9)
	{
		dec *= 10;
		digits /= 10;
	}
	while (dec >= 1)
	{
		counter += _putchar(((digit / dec) % 10) + '0');
		dec /= 10;
	}

	return (counter);
}
