/**
  * factorial - returns the factorial of a number.
  * @n: input integer
  * Return: 1  if @n is 0 and -1 if n is less than 0.
  * else factorial of number
  */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
}
