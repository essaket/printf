#include "main.h"

/**
  * check_specifier- validate the specifier
  * @c: character to be comparate
  *
  * Return: 1 if char is equal to a type
  */
int check_specifier(char c)
{
	char specifiers[] = {'c', 's', 'd', 'i', 'b', '%'};
	int i = 0;

	while (specifiers[i])
	{
		if (specifiers[i] == c)
			return (1);
		i++;
	}
	return (0);
}
