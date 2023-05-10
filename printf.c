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
			else if (format[i + 1] == 'd')
			{
				print_number(va_arg(args, int));
			}
			else if (format[i + 1] == 's')
			{
				count += print_string(va_arg(args, char*));
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
			}
			else if (format[i + 1] == 0)
				_putchar('\n');
			else
			{
				_putchar('%');
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
