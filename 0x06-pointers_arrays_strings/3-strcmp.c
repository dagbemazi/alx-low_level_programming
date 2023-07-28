/**
  * _strcmp - compare two strings
  * @s1: pointer to string 1
  * @s2: pointer to string 2
  * Return: 0 if strings are equal.
  * negative integer if s1 < s2
  * positive integer if s1 > s2
  */

int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);

}
