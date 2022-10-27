#include "main.h"

/*8
 * _strcat - concatenates two strings,
 *
 * @dest: destination.
 * @src:source.
 *
 * Return: the poiter to dest.
 *
 *
 */
char *_strcat(char *dest, char *srrc)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
