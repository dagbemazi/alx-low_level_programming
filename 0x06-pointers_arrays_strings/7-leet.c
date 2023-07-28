/**
  * leet - encode string into 1337
  * @l: pointer to string.
  * Return: pointer to encoded string
  */

char *leet(char *l)
{
	int i, k;

	char b[] = "aAeEoOtTlL";
	char c[] = "4433007711";

	for (i = 0; *(l + i); i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (b[k] == l[i])
			{
				l[i] = c[k];
			}
		}
	}

	return (l);
}
