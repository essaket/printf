#include "main.h"

/**
 * print_octal - prints an octal number.
 * @val: arguments list.
 * Return: integer of counter.
 */
int print_octal(va_list val)
{
	int i, counter = 0, *array;
	unsigned int a, b;

	a = va_arg(val, unsigned int);
	b = a;

	while (a / 8 != 0)
	{
		a /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = b % 8;
		b /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
