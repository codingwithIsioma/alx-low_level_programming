C - Function pointers

TASKS

Task 0 - What's my name

	Write a function that prints a name.

		Prototype: void print_name(char *name, void (*f)(char *))

Task 1 - If you spend too much time thinking about a thing, you'll never get it done

	Write a function that executes a function given as a parameter on each element of an array.

		Prototype: void array_iterator(int *array, size_t size, void (*action)(int));

Task 2 - To hell with circumstances; I create opportunities

	Write a function that searches for an integer.

		Prototype: int int_index(int *array, int size, int (*cmp)(int));

Task 3 - A goal is not always meant to be reached, it often serves simply as something to aim at

	Write a program that performs simple operations.;
