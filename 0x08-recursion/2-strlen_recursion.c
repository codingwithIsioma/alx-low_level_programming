#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string whose length is checked
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	/* checks if the string char is not a null byte*/
	if (*s == '\0')
	{
		return (0);
	}
		/*
		 * iterates over each char and adds 1 to it
		 * when it gets to a null byte, it returns 0
		 * then adds from 0 down the stack till it
		 * gets to the actual first char (adding 1's
		 * all the way down)
	*/
	return (_strlen_recursion(s + 1) + 1);
}
