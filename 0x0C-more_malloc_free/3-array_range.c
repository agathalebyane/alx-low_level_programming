#include <stdlib.h>
#include "main.h"

/**
 * *array_range - It creates array of whole numbers
 * @min: The minimum range of values stored
 * @max: The maximum range of values stored and the number of elements
 *
 * Return: Pointers to new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
