#include <stdlib.h>

int _strlen(char *text);
char *_strcpy(char *dest, char *src);
/**
  * str_concat - a function that concatenates two strings
  * @s1: string 1 pointer
  * @s2 : pointer to input string 2.
  * Return: Null on failure and pointer to  newly allocated memory
  *         containing concatenated strings of @s1 and @s2.
  */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, memsize, t;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	memsize = len1 + len2 + 1;

	ptr = (char *)malloc(memsize);

	if (ptr == NULL)
	{
		return (0);
	}
	else
	{
		_strcpy(ptr, s1);

		for (t = len1; t <= memsize; t++)
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
