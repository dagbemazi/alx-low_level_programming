#include <stdlib.h>

/**
  * int_index - iterates and finds index of array elements
  * @array: pointer to array
  * @size: size of array
  * @cmp: function pointer to compare number
  * Return: -1 if no element matches or size <=  0
  *          else, index of match
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array == NULL || cmp == NULL)
		exit(0);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);

		if (result != 0)
			return (i);
	}

	return (-1);
}
