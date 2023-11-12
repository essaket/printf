#include "main.h"

/**
 * _printf - Print a string acording to a format.
 *
 * @format: Format by specifier.
 *
 * Return: count of characters.
 */
int _printf(const char *format, ...)
{
	int i = 0, counter = 0, fn_count;
	va_list args;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (*format == '%' && *(format + 1) == ' ' && !(*(format + 2)))
		return (-1);
	while (format[i])
	{
		fn_count = 0;
		if (format[i] == '%')
		{
			if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
			{
				counter = -1;
				break;
			}
			fn_count += get_function(format[i + 1], args);
			if (fn_count == 0)
				counter += _putchar(format[i + 1]);
			if (fn_count == -1)
				counter = -1;
			i++;
		}
		else
		{
			if (counter == -1)
			_putchar(format[i]);
			else
			counter += _putchar(format[i]);
		}
		i++;
		if (counter != -1)
			counter += fn_count;
	}
	va_end(args);
	return (counter);
}
