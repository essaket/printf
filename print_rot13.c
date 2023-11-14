#include "main.h"

/**
 * printf_rot13 - printf string to rot13
 *
 * @args: input arguments
 *
 * Return: an int
 */

int printf_rot13(va_list args)
{
	int i, j, nmb = 0, k = 0;
	char *pnt = va_arg(args, char*);
	char array1[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char array2[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (pnt == NULL)
		pnt = "(null)";
	for (i = 0; pnt[i]; i++)
	{
		k = 0;
		for (j = 0; array1[j] && !k; j++)
		{
			if (pnt[i] == array1[j])
			{
				_putchar(array2[j]);
				nmb++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(pnt[i]);
			nmb++;
		}
	}
	return (nmb);
}
