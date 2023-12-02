#include "stringat.h"
/**
 * _strlen - length
 * @s: string
 * Return: string length
 */
int _strlen(const char *s)
{
	int cnt = 0;

	if (!s)
		return (0);
	while (*s++)
		cnt++;
	return (cnt);
}
/**
 * _strdup - create a copy
 * @s: string to copy
 * @size: bytes
 * Return: pointer to the new copied string
 */
char *_strdup(const char *s)
{
	char *copy = (char*)malloc(_strlen(s) * sizeof(char *) + 1);
	int i = 0;

	if (copy == NULL)
		return (NULL);
	for (; i < _strlen(s); i++)
	{
		copy[i] = s[i];
	}
	copy[i] = '\0';
	return (copy);

}
/**
 * _trim - remove white spaces
 * @s: string
 * Return: trimmed string
 */
char *_trim(const char *s)
{
	int start = 0, size = len(s), end = len(s) - 1, i = 0;
	char *new;

	if (!size)
		return (NULL);

	while (s[start] == ' ')
	{
		start++;
	}
	while (s[end] == ' ' && end > start)
	{
		end--;
	}
	size = end - start + 1;
	new = (char *)malloc(sizeof(char *) * (size + 1));
	if (new == NULL)
		return (NULL);

	for(; start <= end; start++, i++)
		new[i] = s[start];
	new[i] = '\0';
	return (new);

}

/**
 * _strcat - concatenate 2 strings
 * @first: first string
 * @second: second string
 * Return: pointer to new string
*/
char *_strcat(const char *first, const char *second)
{
	int size1 = len(first), size2 = len(second), sizeNew, i = 0, j = 0;
	char *new;

	if (!size1 && !size2)
		return (NULL);
	sizeNew = size1 + size2;
	new = (char *)malloc(sizeof(char *) * (sizeNew + 1));
	if (new == NULL)
		return (NULL);
	for (; i < size1; i++)
		new[i] = first[i];
	for (; i < sizeNew; i++, j++)
		new[i] = second[j];
	new[i] = '\0';
	return (new);

}
