#include "main.h"

/**
 * print_string - print string
 * @str: pointer to string
 * Return: counter
 */
int print_string(char *str)
{
	int count = 0;
	int j = 0;
	
	if (str == NULL)
	{
		_putstr("(null)");
		count += 6;
	}
	else
	{
		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
			count++;
		}
	}
	return (count);
}
