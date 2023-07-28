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

	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}


