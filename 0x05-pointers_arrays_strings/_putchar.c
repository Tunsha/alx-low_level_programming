_putchar.c


#include "main.h"
#include "unistd.h"i
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is reurned,and errno is set appropriately.
 */
int _puchar(char c)
{
	return (write(1, &c, 1));



}
