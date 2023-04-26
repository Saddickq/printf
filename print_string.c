#include "main.h"
/**
 * print_char - print a string
 * @str : string pointer
 * Return: int
 */
int print_char(char *str)
{
	int i;
	int j = 0;

	if (str)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
			j += 1;
		}
	}
	return (j);
}
