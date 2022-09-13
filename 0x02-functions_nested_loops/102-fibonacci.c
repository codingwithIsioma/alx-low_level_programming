#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long num1 = 1, num2 = 2, sum;

	printf("%lu, %lu, ", num1, num2);
	for (i = 2; i < 50; ++i)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
