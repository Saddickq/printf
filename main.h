#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct convert - define a struct for sign type
 * @sign : the symbol
 * @f : the function
 */
struct convert
{
	char *sign;
	int (*f)(va_list);
}
typedef struct convert conver_t;

/*********functions**********/
int _printf(const char *format, ...);



#endif
