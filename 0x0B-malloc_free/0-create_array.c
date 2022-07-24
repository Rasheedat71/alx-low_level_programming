#include "main.h"
#include <stdio.h>

/*
 * create_array - creates an array of char and
 * initializes it with a specific char
 * @size: size of the array
 * @c: the specific char to initialize the array with
 * Return: If size == 0 or the function fails - NULL.
 * Otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
return (NULL);
array = malloc(sizeof(c) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
