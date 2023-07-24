/**
  * swap_int - swap the value of two variables
  * @a: pointer object of first integer
  * @b: pointer object of second integer
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
