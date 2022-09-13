#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int num1 = 1, num2 = 2, sum, i;

	printf("%d, %d, ", num1, num2);
	for (i = 3; i < 50; ++i)
	{
		sum = num1 + num2;
		printf("%d", sum);
		num1 = num2;
		num2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
