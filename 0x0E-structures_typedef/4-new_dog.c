#include "dog.h"
#include <stdlib.h>

char *_dup(char *str);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _dup - Points to a newly allocated space which contains a copy
 * of the string given as a parameter
 *
 * @str: The string to be copied
 * Return: A pointer to the copied string
 */
char *_dup(char *str)
{
	char *strarr;
	unsigned int i = 0, j = 0;

	/* If it is an empty string */
	if (str == NULL)
		return (NULL);

	/* While string !is empty move to the next char */
	while (str[i])
		i++;

	/* Allocates memory for all the chars + 1 for '\0' */
	strarr = malloc(sizeof(char) * (i + 1));
	if (strarr == NULL)
		return (NULL);

	/* Copies each char from @str to the pointer *strarr */
	while (str[j])
	{
		strarr[j] = str[j];
		j++;
	}

	/* Sets the last byte to '\0' */
	strarr[j] = 0;

	return (strarr);
}

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;
	char *namecpy;
	char *ownercpy;

	/* Allocates memory for the new dog with the size of the struct*/
	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);

	namecpy = _dup(name);
	/* If they're not the same */
	if (!namecpy && name)
	{
		free(doggie);
		return (NULL);
	}

	ownercpy = _dup(owner);
	/* If they are not the sme */
	if (!ownercpy && owner)
	{
		free(namecpy);
		free(doggie);
		return (NULL);
	}

	doggie->name = namecpy;
	doggie->age = age;
	doggie->owner = ownercpy;

	return (doggie);
}
