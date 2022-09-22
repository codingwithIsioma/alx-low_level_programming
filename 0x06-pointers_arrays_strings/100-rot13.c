#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the string to be encoded
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	/* loops through the string of characters*/
	for (i = 0; s[i] != '\0'; i++)
	{
		/* loops through array a[] to find matching chars*/
		for (j = 0; a[j] != '\0'; j++)
		{
			/* checks if the char in the array matches the string char*/
			if (s[i] == a[j])
			{
				/* equates to the corresponding char in array b*/
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}
