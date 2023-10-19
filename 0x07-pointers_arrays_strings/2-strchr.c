int _strlen(char *s);

/**
  * _strchr - locates a character in string
  * @s: pointer to string
  * @c: character to locate
  * Return: pointer to first occurrence of @c or NULL if not found
  */

char *_strchr(char *s, char c)
{
	/* Return pointer to end of string */
	if (c == '\0')
		return (s + _strlen(s));

	while (*s)
	{
		if (*s == c)
			return (s);

		s++;
	}

	return (0);
}


/**
  * _strlen - find length of string
  * @s: pointer to input string
  * Return: length of string
  */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
