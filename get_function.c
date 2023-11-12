#include "main.h"

/**
 * get_function - getting function specifiers.
 *
 * @c: Conversion specifiers.
 * @args: arguments.
 *
 * Return: char count.
 */

int get_function(char c, va_list args)
{
	int i = 0;
	int count_fun = 0;

	parametres_p specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_digit},
		{'i', print_digit},
		{'%', print_perc},
		{0, NULL}
	};

	while (specifiers[i].specifier)
	{
		if (c == specifiers[i].specifier)
			count_fun += specifiers[i].f(args);
		i++;
	}

	if (count_fun == 0)
	{
		count_fun += _putchar('%');
		count_fun += _putchar(c);
	}

	return (count_fun);
}
