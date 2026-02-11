#include <stdio.h>

/**
 * factorial - calculates the factorial of x.
 *
 * @x: we will calculate the factorial of this number.
 *
 * Return: the answer.
 */

int factorial(int x)
{
	int answer;

	if (x == 0 || x == 1)
		return 1;

	answer = x * factorial(x - 1);

	return answer;
}


/**
 * main - print the result.
 *
 * Return: 0.
 */

int main(void)
{
	printf("%d\n", factorial(5));
}

