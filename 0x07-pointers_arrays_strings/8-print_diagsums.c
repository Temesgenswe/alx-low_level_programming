#include "main.h"

void print_chessboard(char (*a)[8])
{
	int count, c;

	for (c = 0; c < 8; c++)
	{
		for (count = 0; count < 8; count++)
			_putchar(a[c][count]);
		_putchar(10);
	}
}
