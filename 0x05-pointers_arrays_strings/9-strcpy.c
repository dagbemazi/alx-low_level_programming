#include <string.h>

/**
 * *_strcpy - copies string pointed to by src to the  buffer
 * including the NULL character to the buffer pointed to by dest
 * @dest: destination
 * @src: source pointer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, const char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (original_dest);
}
