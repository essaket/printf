#include "main.h"

/**
 * _printf - Print a string acording to format.
 *
 * @format: String of the Format .
 *
 * Return: count of characters in the string.
 */
int _printf(const char *format, ...)
{
	int i = 0, counter = 0, fn_counter;

	va_list args;

	va_start(args, format);

	if (!format || (*format == '%' && !(*(format + 1))))
		return (-1);
	if (*format == '%' && *(format + 1) == ' ' && (*(format + 2)) == "")
		return (-1);
	while (*(format + i) != '\0')
	{
		fn_counter = 0;
		if (*(format + i) == '%')
		{
		fn_counter += get_function(*(format + i + 1), args);
		if (fn_counter == 0)
		counter += _putchar(*(format + i + 1));
		if (fn_counter == -1)
		counter = -1;
		i++;
		}
		else
		{
		counter += _putchar(*(format + i));
		}
	counter += fn_counter;
	i++;
	}
	va_end(args);
	return (counter);
}
