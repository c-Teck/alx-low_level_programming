#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 48; digit1 < 58; digit1++)
	{
		for (digit2 = 48; digit2 < 58; digit2++)
		{
			if (digit1 != digit2 && digit1 < digit2)
			{
				putchar(digit1);
				putchar(digit2);
				if (digit2 == 57 && digit1 == 56)
				{
					break
						;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
