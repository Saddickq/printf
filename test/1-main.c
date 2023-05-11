#include "main.h"
#include <string.h>

int main(void)
{
	char l = 'V';
	
	int age = 4;
	int year = 2035;
	int neg = -21;
	int sub = -3;

	char name[] = "Saddickq";

	_printf("complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("%%\n");
	_printf("%s", "This sentence is retrieved from va_args!\n");
	_printf("%s%c%c%c%s%%%s\n", "Loading ", '.', '.', '.', "99", " Please wait");
	
	_printf("%s\n%c for %s\n", "Apple", l, "vulture");
	_printf("This is testing\n");
	_printf("%");
	_printf("============================================\n");
	_printf("My age is %d\n", age);
	_printf("%d\n", sub);
	_printf("In %d this will be weird and crazy\n", year);
	_printf("%s is %d\n", name, neg);
	_printf("my phone is %i\n", 100);
	_printf("tamale is full of %i\n", -46);
	_printf("%k\n");
	_printf(NULL);

	return (0);
}
