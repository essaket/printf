#include "main.h"

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	va_list arguments;

	if (format == NULL)
		return (-1);

	va_start(arguments, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			i++;

			while (format[i] == ' ')
				i++;

			if (format[i] == '%')
				count += _putchar(format[i]);

			if (check_specifier(format[i]) == 0)
			{					
				count = invalid_specifier(format[i - 1], format[i], count);
			}
			else
			{
				count += get_function(format[i], arguments);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}

		i++;
	}

	va_end(arguments);
	return (count);
}
