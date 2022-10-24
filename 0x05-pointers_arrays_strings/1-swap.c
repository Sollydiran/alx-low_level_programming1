#include "main.h"

/**
 * swap_int-Swaps the value of 2 integers
 * @a: First arguement to be swapped
 * @b: Second argument to be swapped
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
