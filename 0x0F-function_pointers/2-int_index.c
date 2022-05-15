<<<<<<< HEAD
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: Name passed
 * @size: Number of iterations
 * @cmp: Points to a function
 * Return: Returns nothing
**/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL)
{
return (-1);
}

if (size <= 0)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}

return (-1);
=======
#include "function_pointers.h"

/**
 * array_iterator - executes a function on elements
 * @array: inputs int array
 * @size: size of the array
 * @action: pointer to the function
 * Return: always return 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
		for (x = 0; x < size; x++)
			action(array[x]);
>>>>>>> 936380fb94f1dc541c10bccfb7e8f4b47d131528
}
