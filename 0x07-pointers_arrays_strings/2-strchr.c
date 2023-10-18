/**
  * _strchr - locates a character in string
  * @s: pointer to string
  * @c: character to locate
  * Return: pointer to first occurrence of @c or NULL if not found
  */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);

		s++;
	}

	return (0);
}
