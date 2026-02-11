#include <stdio.h>
#include <stdlib.h>

long long ans[50];

/**
 * fibonacci - returns a fibonacci series.
 *
 * @x: the length of the series.
 *
 * Return: the series.
 */

long long *fibonacci(long long x)
{
	ans[0] = 0;
	ans[1] = 1;

        if (x == 0 || x == 1)
	{
		return ans;
	}
	fibonacci(x - 1);

        ans[x] = ans[x - 1] + ans[x - 2];

        return ans;
}


/**
 * main - print the result.
 *
 * Return: 0.
 */

int main(void)
{
	int j, n;

	printf("size must be less than 50\n");
	printf("the size? ");
	scanf("%d", &n);
	if (n > 50)
		printf("size must be less than 50");
	else		
		for (j = 0; j <= n; j++)
        		printf("%lld ", *(fibonacci(n) + j));
		printf("\n");
}
