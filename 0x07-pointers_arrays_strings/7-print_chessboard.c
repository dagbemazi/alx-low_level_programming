#include "main.h"

/**
  * print_chessboard - prints the given chessboard
  * @a: pointer to array
  */

void print_chessboard(char (*a)[8])
{
	int i, j, arrlen;

	arrlen = sizeof(*a);

	for (i = 0; i < arrlen; i++)
	{
		for (j = 0; j < arrlen; j++)
		{
			char c = a[i][j];

			_putchar(c);
		}
		_putchar('\n');
	}
}
