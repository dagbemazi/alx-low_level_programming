#include "main.h"
/**
  * _strcat - concatenate two string
  * @dest: pointer to dest string
  * @src: pointer to src string
  * Return: pointer to resulting string
  */

char *_strcat(char *dest, char *src)
{
	int i, len;

	len = _strlen(dest);

	for (i = 0; (i <= len && src[i] != '\0'); i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
