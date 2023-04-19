#include "function_pointers.h"

/**
 * print_name - func that prints name
 * @name: name we want to print
 * @f: pointer to a func
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
