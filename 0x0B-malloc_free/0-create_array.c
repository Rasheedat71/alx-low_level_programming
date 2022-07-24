#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: specific char to initiate the array with
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
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
