/**
  * _strlen - find length of string
  * @s: input string
  * Return: length
  */

int _strlen(char *s)
{
	int length;

	length = strlen(s);

	return (length);
}


/**
  * _strchr - locates a character in string
  * @s: pointer to string
  * @c: character to search
  * Return: pointer first occurence of @c,
  * NULL if not found
  */

char *_strchr(char *s, char c)
{
	int len, *p;

	len = _strlen(s);

	for (i = 0; i < len && s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &(s[i]);
			break;
		}
	}

	if (p)
	{
		return (p);
	}
	else
	{
		return (NULL);
	}
}
