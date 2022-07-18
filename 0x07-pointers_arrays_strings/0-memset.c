#include "main.h"
/**
 * _memset - a function that fills the first n bytes with a constn byte b
 * @b: the constant charcter or byte
 * @n: the fist n elements
 * @s: the array or pointer
 * Return: s which is the pointer or the array
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
