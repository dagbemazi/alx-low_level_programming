/**
  * _memset - fills memory with constant bytes
  * @s: pointer of buffer to fill
  * @b: bytes
  * @n: number of bytes to fill
  * Return: pointer to buffer.
  */

char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
