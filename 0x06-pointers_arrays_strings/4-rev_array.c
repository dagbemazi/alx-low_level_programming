/**
  * reverse_array - reverse contents of an array of integers
  * @a: pointer array
  * @n: number of elements in array
  */

void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		b = a[i];
		a[i]  = a[n - 1 - i];

		a[n - 1 - i] = b;
	}
}
