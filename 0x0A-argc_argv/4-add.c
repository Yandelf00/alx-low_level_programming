#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - this is the main function.
 *@argc: the count.
 *@argv: the array that contains the elements.
 *Return: 0 for success and 1 one of args isn't int.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	return (0);
}
