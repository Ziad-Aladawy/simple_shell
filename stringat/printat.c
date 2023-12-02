#include "stringat.h"
/**
 * _putchar - putchar function
 * @c: char
 * Return: 1 success, -1 failed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - puts function
 * @s: string to print
 */
void _puts(char *s)
{
	int i = len(s);

	return (write(1, s, i));
}
