#include <stdlib.h>

int _strlen(char *text);
char *_strcpy(char *dest, char *src);

/**
  * argstostr - concatenates all arguments of a program
  * @ac: number of arguments
  * @av: arguments passed
  * Return: Null if ac == 0 or av == 0 and if program fails
  *         else, pointer to new string.
  */

char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *res, *temp;

	if (ac == 0 || av == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			len += _strlen(av[i]);
		}

		res = (char *)malloc(sizeof(char) * (len + ac + 1));

		if (res == NULL)
		{
			return (0);
		}
		else
		{
			temp = res;

			for (i = 0; i < ac; i++)
			{
				for (j = 0; av[i][j]; j++)
				{
					*temp = av[i][j];
					temp++;
				}
				*temp = '\n';
				temp++;
			}

			temp += '\0';
		}
	}

	return (res);
}

/**
  * _strlen - find the length of the string
  * @text: string to find length for
  * Return: length of string
  */

int _strlen(char *text)
{
	int length;

	length = 0;

	while (text[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
  * _strcpy - copies the content of a string to dest
  * @dest: pointer to destination address to copy string to
  * @src: pointer to string being copied
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src);
	int i;

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[len] = '\0';

	return (dest);
}
