#include "main.h"

/**
 * print_HEX - prints an hexadecimal number.
 * @args: arguments list.
 * Return: counter.
 */
int print_HEX(va_list args)
{
	int i, counter = 0, *array;
	unsigned int a, b;

	a = va_arg(args, unsigned int);
	b = a;

	while (a / 16 != 0)
	{
		a /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = b % 16;
		b /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
