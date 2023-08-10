#include <stdlib.h>

int _strlen(char *text);

/**
  * str_concat - a function that concatenates two strings
  * @s1: string 1 pointer
  * @s2 : pointer to input string 2.
  * Return: Null on failure and pointer to  newly allocated memory
  *         containing concatenated strings of @s1 and @s2.
  */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, memsize, t, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = " ";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	memsize = len1 + len2 - 1;

	ptr = (char *)malloc(memsize);

	if (ptr == NULL)
		return (0);

	for (i = 0; i < len1; i++)
	{
		if (s1[i] != '\0')
			ptr[i] = s1[i];
	}

	for (t = len1; t <= memsize; t++)
	{
		ptr[t] = s2[t - len1];
	}

	return (ptr);
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
