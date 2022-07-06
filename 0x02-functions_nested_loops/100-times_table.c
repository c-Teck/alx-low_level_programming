#include "main.h"
/**
 * print_times_table - TImes table 1 to n
 * @n: Parameter
 * Return: Void
 */
void print_times_table(int n)
{
	int t = 0, tt;

	if ((n < 15) && (n >= 0))
	{
		while (t <= n)
		{
			for (tt = 0; tt <= n; tt++)
			{
				int times = tt * t;
				if (tt == 0)
					_putchar('0' + times);
				if (tt != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (times < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + times);
					}
					else if (times < 100)
					{
						_putchar(' ');
						_putchar('0' + times / 10);
						_putchar('0' + times % 10);
					}
					else
					{
						_putchar('0' + ((times / 10) / 10));
						_putchar('0' + ((times / 10) % 10));
						_putchar('0' + (times % 10));
					}
				}
				if (tt == n)
					_putchar('\n');
			}
			t++;
		}
	}
}
