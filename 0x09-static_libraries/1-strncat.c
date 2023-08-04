/**
  * str_len - find length of string
  * @s: pointer to input string
  * Return: length of string
  */

int str_len(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
  * _strncat - concatenate two string
  * @dest: pointer to dest string
  * @src: pointer to src string
  * @n: number of bytes needed.
  * Return: pointer to resulting string
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = str_len(dest);

	for (i = 0; (i < n && src[i] != '\0'); i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
