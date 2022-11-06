#include "main.h"

/**
 * _strpbrk - program that matches any character specified
 * @s: This is the C string to be scanned.
 * @accept:character in str1 that matches one of the characters in str2
 *Return: string s that matches any character specified in accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0') /*Initializing WHILE Loop*/
	{
		j = 0;
		while (accept[j] != '\0')  /*Evaluating *accept*/
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++; /*add j+1*/
		}
    /*End of WHILE *accept*/

		s++; /*add s+1*/
	}
  /*End of Outer WHILE Loop*/
	return (0);

}
