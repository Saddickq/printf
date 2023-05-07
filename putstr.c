#include "main.h"
/**
 * _putstr - print a string
 * @str : string pointer
 * Return: int
 */
void _putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
