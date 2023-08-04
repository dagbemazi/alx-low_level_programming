/**
  * _memcpy - copies buffer to memory area
  * @dest: pointer to destination
  * @src: pointer to bytes to be copied
  * @n: number of bytes
  * Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
