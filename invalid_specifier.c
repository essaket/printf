#include "main.h"
/**
  * invalid_specifier - Prints an invalid specifier
  * @prev_chara: The previous character of actual specifier
  * @chara: The specifier to prints
  * @count: The current count before prints invalid specifiers
  *
  * Return: The current count after prints invalid specifiers
  */
int invalid_specifier(char prev_chara, char chara, int count)
{
	count += _putchar('%');

	if (prev_chara == ' ')
	{
		count += _putchar(' ');
		count += _putchar(chara);
	}
	else
	{
		count += _putchar(chara);
	}

	return (count);
}
