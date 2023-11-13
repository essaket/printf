#include "main.h"

/**
 * print_binary - prints a binary
 * 
 * @args: list of arguments
 * 
 * Return: a number of binary number
*/

int print_binary(va_list args)
{
    unsigned int number = va_arg(args, int);
    int i = 0;

    while (number!= 0)
    {
        _putchar(number % 2 + '0');
        number /= 2;
        i++;
    }
    return (i);
}
