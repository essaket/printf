#include "main.h"
/**
  * get_function - Prints a valid specifier
  * @chara: The specifier to prints
  * @args: A list of variadic arguments
  *
  * Return: The length of the specifier
  */
int get_function(char chara, va_list args)
{
	int i  = 0, count = 0;
	specifiers_p specifiers[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_digit},
		{"i", print_digit},
		{NULL, NULL}
	};

	while (specifiers[i].specifier)
	{
		if (*specifiers[i].specifier == chara)
			count = specifiers[i].f(args);

		i++;
	}

	return (count);
}
