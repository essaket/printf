#include "main.h"

/**
 * printf_test - function that prints
 *
 * @format: input of function
 *
 * Return: number of char
 */

int printf_test(const char *format, ...)
{
	int count = 0;

	va_list atgs;
	va_start(args, format);

	if (!format || !format
