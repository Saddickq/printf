#include "main.h"
/**
 * _printf - recieves a format to print the appropriate string
 * @format :a string containing all formats specifiers
 * Return: character to be printed
 */

int _printf(const char *format, ...)
{
	int characters;

	conver_t fun_list[] = {
		{"s", print_string},
		{"c", print_character},
		{"d", print_integer},
		{"i", print_integer},
		{"%", print_percent},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
	{
		return (-1);
	}
	va_ start(arg_list, format);
	characters = parser(format, fun_list, arg_list);
	va_end(arg_list);
	return (characters);
