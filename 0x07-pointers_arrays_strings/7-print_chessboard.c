#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: chessboard to be printed
 */
void print_chessboard(char (*a)[8])
{
	int k, v;

	for (k = 0; a[k][7]; k++)
	{
		for (v = 0; v < 8; v++)
			_putchar(a[k][v]);

		_putchar('\n');
	}
}
