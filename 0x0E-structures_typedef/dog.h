#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines the name, age and owner of dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
