#include <stdio.h>
/**
 *main - this is the main function.
 *@argc: the count.
 *@argv: the array that contains the elements.
 *Return: 0 for success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
