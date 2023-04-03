#include "main.h"
/**
 *_strchr - function that locates a characater in a string.
 *@s:pointer character
 *@c:a normal character
 *Return: Returns a pointer
*/
char *_strchr(char *s, char c)
{
char *ps = s;
while (*ps)
{
if (*ps == c)
{
return (ps);
}
ps++;
}
return (0);
}
