#include "main.h"
#include <unistd.h>

/**
  * print_char - Prints a char
  * @args: A list of variadic arguments
  *
  * Return: The length of the character
  */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));

	return (1);
}
