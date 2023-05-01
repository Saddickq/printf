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
				char alp = va_arg(args, int);

				_putchar(alp);
				count++;
			}
			else if (format[i + 1] == 's')
			{
				char *str = va_arg(args, char*);
				int j = 0;

				if (str == 0)
				{
					_putstr("(null)");
					count += 6;
				}
				else
				{
					while (str[j])
					{
						_putchar(str[j]);
						j++;
						count++;
					}
				}
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%');
			}
			else
			{
				_putchar(format[i + 1]);
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
