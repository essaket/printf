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
		{"b", print_binary},
		{"d", print_digit},
		{"i", print_digit},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{"S", print_String},
		{"p", print_address},
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
