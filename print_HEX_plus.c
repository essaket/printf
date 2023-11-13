#include "main.h"

/**
 * print_HEX_plus - prints an hexadecimal number.
 * @n: number to print.
 * Return: integer of counter.
 */
int print_HEX_plus(unsigned int n)
{
	int i, counter = 0, *array;
	unsigned int a;

	a = n;

	while (n / 16 != 0)
	{
		n /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = a % 16;
		a /= 16;
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
