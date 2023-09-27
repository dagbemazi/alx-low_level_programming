/**
  * _pow_recursion - compute the value of a number
  * raised to a power
  * @x: base integer
  * @y: exponent integer
  * Return: value of x raised to y
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0 || x == 1)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
