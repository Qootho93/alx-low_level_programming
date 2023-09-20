#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, p;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (p = 0; p < 10; p++)
		{
			if (n[i] == s1[p])
			{
				n[i] = s2[p];
			}
		}
	}
	return (n);

}
