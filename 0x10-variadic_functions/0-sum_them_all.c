#include "variadic_functions.h"
/**
 *sum_them_all - our function that sums args.
 *@n: the number of our args
 *Return: sum if success, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list args;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}
	va_end(args);
	return (sum);
}
