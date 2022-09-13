#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long num1 = 0, num2 = 1, sum;

	for (i = 0; i < 98; i++)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;

		if (i == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
