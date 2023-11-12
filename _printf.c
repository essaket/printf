#include "main.h"



/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	int i = 0, fncount, count = 0;
	va_list arguments;

	va_start(arguments, format);
	if (!format || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			else
			{	fncount = get_function(format[i + 1], arguments);
				if (fncount == 0)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
				}
				else
				{
					count += fncount;
					i++;
					continue;
				}
			}
		}
		else
		count += _putchar(format[i]);
		}
	va_end(arguments);
	return (count);
}
