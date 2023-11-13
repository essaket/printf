#include "main.h"

/**
 * print_hex_plus - prints an hexadecimal number.
 * @n: arguments list.
 * Return: counter.
 */
int print_hex_plus(unsigned long int n)
{
	long int i, counter = 0, *array;
	unsigned long int a;

	a = n;

	while (n / 16 != 0)
	{
		n /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (i = 0; i < counter; i++)
	{
		array[i] = a % 16;
		a = a / 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
