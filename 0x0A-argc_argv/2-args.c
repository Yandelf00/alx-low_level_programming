#include <stdio.h>
/**
 *main - this is the main function.
 *@argc: the count.
 *@argv: the array that contains the elements.
 *Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
