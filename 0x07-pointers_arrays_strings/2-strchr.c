/**
  * _str_len - find length of string
  * @s: input string
  * Return: length
  */

int _str_len(char *s)
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
  * _strchr - locates a character in string
  * @s: pointer to string
  * @c: character to search
  * Return: pointer first occurence of @c,
  * NULL if not found
  */

char *_strchr(char *s, char c)
{
	int i, len;
	char *p;

	len = _str_len(s);

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
		return (0);
	}
}
