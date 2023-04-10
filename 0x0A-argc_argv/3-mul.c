#include <stdio.h>
#include <stdlib.h>
/**
 *main - this is the main function.
 *@argc: the count.
 *@argv: the array that contains the elements.
 *Return: 0 for success and 1 if there not three args.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
