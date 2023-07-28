/**
  * rot13 - encrpypt string with ROT13
  * @str: input string pointer
  * Return: ciphertext
  */

char *rot13(char *str)
{
	int a, b;

	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char *sub = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; alpha[b] != '\0'; b++)
		{
			if (str[a] == alpha[b])
			{
				str[a] = sub[b];
			}
		}

	}

	return (str);
}
