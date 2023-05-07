#include "main.h"
#include <string.h>

int main(void)
{
	char l = 'V';
	char a = 'A';
	char arr[] = "This is testing ";

	
	char name[] = "Saddickq";

	_printf("My char is %c\n", a);
	_printf("My name is %s\n", name);
	_printf("complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("%%\n");
	_printf(NULL);

	_printf("%s%c%c%c%s%%%s\n", "Loading ", '.', '.', '.', "99", " Please wait");

	_printf("%MK234\n");
	_printf("%!\n");
	
	_printf("%c for %s\n%c for %s\n", a, "Apple", l, "vulture");
	return (0);
}
