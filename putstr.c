#include "main.h"
/**
 * _putstr - print a string
 * @str : string pointer
 * Return: int
 */
int _putstr(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}
