#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 * Return: the string
 */
char *leet(char *str)
{
	int i, j;

	/* store the leet codes in pointers*/
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	/* loop through the string of characters*/
	for (i = 0; str[i] != '\0'; i++)
	{
		/*loop through the leet codes (chars)*/
		for (j = 0; j < 10; j++)
		{
			/*
			 * checks if the string char is the same
			 * as any of the looped code
			 */
			if (str[i] == a[j])
				str[i] = b[j]; /* equates the char to the
						* corresponding code digit
						*/
		}
	}
	return (str);
}
