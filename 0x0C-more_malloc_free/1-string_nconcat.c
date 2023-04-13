#include "main.h"
#include <stdlib.h>
/**
 *_strlen - counts
 *@s: string or smtg
 *Return: counter
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}

/**
 *string_nconcat - function that concatenates two strings
 *@s1: our first string
 *@s2: our second string
 *Return: pointer the concateneted string, NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1, l2;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n > l2)
	{
		n = l2;
	}
	ptr = (char *)malloc((l1 + n + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[j + l1] = s2[j];
	}
	ptr[n + l1] = '\0';
	return (ptr);
}
