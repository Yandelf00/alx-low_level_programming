#include "main.h"
/**
 *_memcpy - a function that copies bytes from memory area to another one.
 *@dest:pointer
 *@src:another pointer
 *@n:bytes of the memory
 *Return: Returns a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (i = 0; i < n ; i++)
{
dest[i] = src[i];
}
return (dest)
}
