#include "main.h"
/**
 * print_number - print decimal numbers
 * @number: pointer to variable
 * Return: count
 */
int print_number(int number)
{
    int count = 0;

    int decimal;

    if (number < 0)
    {
        _putchar('-');
        count++;
        decimal = -number;
    }
    else
        decimal = number;
    if (decimal < 10)
    {
        _putchar(decimal + 48);
        count++;
    }
    else
    {
        count += print_number((decimal / 10));
        _putchar((decimal % 10) + 48);
        count++;
    }
    return (count);
}  
        