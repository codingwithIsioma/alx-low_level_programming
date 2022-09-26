#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 * @a: The chessboard to be printed
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/* loops through the first array (rows)*/
	for (i = 0; i < 8; i++)
	{
		/* loops through the second array (cols)*/
		for (j = 0; j < 8; j++)
		{
			/*
			 * When it loops to the 7th col
			 * Print a new line for the next row
			 */
			if (j == 7)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
				_putchar(a[i][j]);
		}
	}
}
