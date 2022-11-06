#include "main.h"

/**
 * _strspn - Locates a character in a string
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 **/

unsigned int _strspn(char *s, char *accept)

{
	int i, j;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	i = 0;
	while (str1[i] != '\0') /*Outer WHILE Loop Begins *s */
	{
		j = 0;
		while (str2[j] != '\0') /*Beginng of Netsted WHILE loop*/
		{
			if (str2[j] == str1[i]) /*Evaluate condition*/
			{
				count++; /*count number*/
				break;
			}

			j++;    /*add j+1*/
		}
    /*End of Netsted WHILE loop*/

		if (s[i] != accept[j]) /*If aren't equals*/
		{
			break;
		}

		i++; /*add x+1*/
	}
  /*End of Outer WHILE loop*/

	return (count); /*return the value of count*/
}
