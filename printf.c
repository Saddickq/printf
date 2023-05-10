#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int count = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				_putchar(va_arg(args, int));
				count++;
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				count += print_number(va_arg(args, int));
			else if (format[i + 1] == 's')
				count += print_string(va_arg(args, char*));
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				_putchar(format[i + 1]);
				count++;
			}
			i++;
		}
		else
			_putchar(format[i]);
			count++;
	}
	va_end(args);
	return (count);
}
