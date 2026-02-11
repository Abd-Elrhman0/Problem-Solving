#include <stdio.h>

/**
 * print_chessboard - prints an 8x8 chessboard.
 *
 * @a: pointer to a 2D array of 8 chars (the chessboard layout).
 */

void print_chessboard(char (*a)[8])
{
	int j, i;

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			printf("%c ", a[j][i]);
		}
		printf("\n");
	}
}

/**
 * main - tests the code.
 *
 * Return: 0.
 */

int main(void)
{
	char a[8][8] = {
		{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
};

	print_chessboard(a);
}
