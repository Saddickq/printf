#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i;
	int count = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				count++;
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
			}
			else if (format[i + 1] == 's')
			{
				print_string(va_arg(args, char*));
			}
			else
			{
				_putchar(format[i + 1]);
				count++;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
