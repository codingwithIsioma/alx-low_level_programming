C - malloc, free

TASKS

Task 0 - Float like a butterfly, sting like a bee

	Write a function that creates an array of chars, and initializes it with a specific char.

	Prototype: char *create_array(unsigned int size, char c);

Task 1 - The woman who has no imagination has no wings

	Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

	Prototype: char *_strdup(char *str);

Task 2 - He who is not courageous enough to take risks will accomplish nothing in life

	Write a function that concatenates two strings.

	Prototype: char *str_concat(char *s1, char *s2);

Task 3 - If you even dream of beating me you'd better wake up and apologize

	Write a function that returns a pointer to a 2 dimensional array of integers.

	Prototype: int **alloc_grid(int width, int height);

Task 4 -  It's not bragging if you can back it up

	Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

	Prototype: void free_grid(int **grid, int height);
