#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	unsigned int h = 0, printed_value = 0;
	va_list args;
	int r_val;

	va_start(args, format);

	for ( ; format[h] != '\0' ; h++)
	{
		if (format[h] != '%')
		{
			_putchar(format[h]);
		}
		else if (format[h + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			h++;
		}
		else if (format[h + 1] == 's')
		{
			r_val = put_s(va_arg(args, char *));
			h++;
			printed_value += (r_val - 1);
		}
		else if (format[h + 1] == '%')
		{
			_putchar('%');
			h++;
		}
		printed_value += 1;
	}
	return (printed_value);
}
