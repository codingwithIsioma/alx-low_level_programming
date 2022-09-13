#include <stdio.h>

/**
 * main - prints fibonacci numbers less than 4000000
 *        and prints their sum
 * Return: Always 0
 */
int main(void)
{
	unsigned long num1 = 0, num2 = 1, sum;
	float tot_sum;

	while (!0)
	{
		sum = num1 + num2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			tot_sum += sum;

		num1 = num2;
		num2 = sum;
	}
	printf("%.0f\n", tot_sum);
	return (0);
}
