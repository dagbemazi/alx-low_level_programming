
/**
  * print_name - function pointer to print a name
  * name: string name to print
  * f: pointer to function to call
  * Return: nothing
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
