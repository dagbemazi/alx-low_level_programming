#include <stdio.h>
/**
  * jack_bauer - print minutes of day starting
  * from 00:00 to 23:59
  */

void jack_bauer(void)
{
	int t_min, t_hours, i, j;
	int first_hr, second_hr, first_min, second_min;

	t_min = 59;
	t_hours = 23;

	for (i = 0; i <= t_hours; i++)
	{
		for (j = i + 1; j <= t_min; j++)
		{
			first_hr = i / 10;
			second_hr = i % 10;

			first_min = i / 10;
			second_min = i % 10;

			printf("%d%d:%d%d\n", first_hr, second_hr, first_min,
					second_min);

		}
	}
}

int main(void)
{
	jack_bauer();
	return (0);
}
