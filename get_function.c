#include "main.h"

/**
 * get_function - function specifiers.
 *
 * @specifier: Conversion specifiers.
 * @args: arguments.
 *
 * Return: char count.
 */

int get_function(char specifier, va_list args)
{
	int i = 0;
	int counter = 0;

	parametres_p spec[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_perc},
		{'d', print_digit},
		{'i', print_digit},
	};

	while (spec[i].s)
	{
		if (specifier == spec[i].s)
			counter += spec[i].f(args);
		i++;
	}

	if (counter == 0)
	{
		counter += _putchar('%');
		counter += _putchar(specifier);
	}

	return (counter);
}
