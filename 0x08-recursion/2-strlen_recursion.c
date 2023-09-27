**
  * _strlen_recursion - return length of string
  * @s: pointer to input string
  * Return: length of string
  */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		i++;

		return (i + _strlen_recursion(++s));
	}
}
