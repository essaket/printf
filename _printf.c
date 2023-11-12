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
	if (!(*(format + i)))
		return (0);
	for (i = 0; format && *(format + i); i++)
	{
		if (*(format + i) == '%')
		{
			if (*(format + i + 1) == '\0')
			{
				return (-1);
			}
			else
			{
				fn_counter += get_function(*(format + i + 1), args);
				if (fn_counter == 0)
				{
					if (*(format + i) == ' ' && !(*(format + i + 2)))
						return (-1);
				}
				else
				{
					counter += fn_counter;
					i++;
					continue;
				}
			}
		}
		else
		counter += _putchar(*(format + i));
	}
	va_end(args);
	return (counter);
}
