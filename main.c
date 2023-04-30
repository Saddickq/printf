#include "main.h"
#include <string.h>

int main(void)
{
	char l = 'V';
	char a = 'A';
	char arr[] = "This is testing ";

	_printf("%s\n", arr);
	_printf("[Hello world]\n");
	_printf("%c\n", l);
	
	char name[] = "Saddickq";

	_printf("My name is %s\n", name);
	_printf("character %c and Name %s\n", a, name);

	_printf("String:[%s]\n", "I am a string !");
	
	_printf("%c for %s\n%c for %s\n", a, "Apple", l, "vulture");
	return (0);
}
