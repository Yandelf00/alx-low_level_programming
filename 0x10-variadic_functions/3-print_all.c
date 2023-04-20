#include "variadic_functions.h"
/**
 * print_all - prints it all
 * @format: list of the types of parameters passed
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, m = 0;
	char *arg;

	va_start(valist, format);

	while (format && format[i])
	{
		if (m)
			printf(", ");
		switch (*format)
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%i", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			arg = va_arg(valist, char *);
			if (arg)
			{
				printf("%s", arg);
				break;
			}
			printf("%p", arg);
			break;
		default:
			m = 0;
			i++;
			continue;
		}
		m = 1;
		i++;
	}
	printf("\n");
	va_end(valist);
}
