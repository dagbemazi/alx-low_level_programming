/**
  * _strspn - retrieves length of prefix substring
  * @s: pointer to initial segment
  * @accept: pointer to bytes
  * Return: Number of bytes
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int t;
	int i;

	t = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				t++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (t);
			}
			s++;
		}
	}
	return (t);
}

}
