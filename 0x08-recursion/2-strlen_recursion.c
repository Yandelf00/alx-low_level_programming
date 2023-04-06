#include "main.h"
/**
 *_strlen_recursion - a function that calculates length of string.
 *@s:string.
 *Return: returns the length of string.
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	if (!*(s + 1))
	{
		return (1);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
