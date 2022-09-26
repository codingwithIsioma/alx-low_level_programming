#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: A double pointer
 * @to: A pointer whose value is stored in @s
 */
void set_string(char **s, char *to)
{
	*s = to;
}
