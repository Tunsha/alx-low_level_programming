#include "main.h"

/**
 * _memset - Entry point
 * @s: Pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0 (success)
 */
char *_memeset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i< n; i++)
		s[i] = b;
	return (s);
}
