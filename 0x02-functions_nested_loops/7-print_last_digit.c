#include "main.h"
/**
 * print_last_digit- printlast digit of a number
 * @n: parameter
 * Return: integer value
 */
int print_last_digit(int n)
{
	int lt = n % 10;

	if (lt < 0)
	{
		lt = lt * -1;
	}
	_putchar(lt + '0');
	return (lt);
}
