#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num0, num1, num2;

	for (num0 = 48; num0 < 58; num0++)
	{
		for (num1 = 49; num1 < 58; num1++)
		{
			for (num2 = 50; num2 < 58; num2++)
			{
				if (num2 > num1 && num1 > num0)
				{
					putchar(num0);
					putchar(num1);
					putchar(num2);
					if (num0 != 55 || num1 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
