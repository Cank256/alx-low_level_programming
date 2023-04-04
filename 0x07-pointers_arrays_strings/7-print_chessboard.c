#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard represented as a 2D array of characters.
 *
 * @a: The 2D array of characters representing the chessboard.
 *
 * Return: None.
 */
void print_chessboard(char (*a)[8])
{
int row, col;

for (row = 0; row < 8; row++)
{
for (col = 0; col < 8; col++)
{
_putchar(a[row][col]);

if (col == 7)
{
_putchar('\n');
}
}
}
}
