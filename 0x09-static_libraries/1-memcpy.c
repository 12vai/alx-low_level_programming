#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: pointer to the memory location where the copied bytes will be stored.
 * @src: pointer to the memory location where the bytes to be copied.
 * @n: number of bytes
 *
 * Return: copy memory with a byte change
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int v = 0;
int g = n;

for (; v < g; v++)
{
dest[v] = src[v];
n--;
}
return (dest);
}
