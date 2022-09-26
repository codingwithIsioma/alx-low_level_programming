#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the strinf to be searched
 * @c: the character to be located
 * Return: a pointer to the first occurrence of the char @c
 *         or NULL if the char is not found.
 */
char *_strchr(char *s, char c)
{
	/* loops till it reaches the end of the string*/
	while (*s != '\0')
	{
		/*
		 * compares @c with the currrent char after the loop
		 * checks every char of the string against @c
		 */
		if (*s == c)
		{
			/*returns the pointer to c when a char is matched*/
			return (s);
		}
		/* increments the value of @s to the next string char */
		s++;
	}
	/*
	 * if @c is '\0', you should return the pointer
	 * to the '\0' of the string @s
	 */
	if (*s == c)
	{
		return (s);
	}
	/* gets out of loop because it did not find a matching @c */
	return (NULL);
}
