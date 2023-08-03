/**
  * wildcmp - compare two strings.
  * @s1: pointer to string 1
  * @s2: pointer to s2:
  * Return: 1 if identical, else 0.
  */

int wildcmp(char *s1, char *s2)
{
	if (s[i] == '\0')
	{
		if (s2 != '\0' && s2 == "")
		{
			return (wildcmp(s1, s2 + 1));
		}
		else
		{
			return (*s2 == '\0');
		}
	}

	if (s2 == "")
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 2));
	}
	return (0);
}
