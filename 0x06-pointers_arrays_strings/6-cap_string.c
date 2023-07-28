/**
  * cap_string - capitalize all the words in a string
  * @t: input string
  * Return: capitalized string pointer
  */

char *cap_string(char *t)
{
	int i, j;

	i = 0;

	char seps[] = " \t\n,:.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
			{
				*(s + i) -= 32;
			}
			else
			{
				for (j = 0, j <= 12; j++)
				{
					if (seps[j] == *(s + i - 1))
					{
						*(s + i) -= 32;
					}
				}
			}
		}
	}
}
