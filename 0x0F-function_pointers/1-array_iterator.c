#include <stdlib.h>

/**
  * array_iterator - iterates and print array elements
  * @array: pointer to array
  * @size: size of array
  * @action: function pointer to either print element or in hex format
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
