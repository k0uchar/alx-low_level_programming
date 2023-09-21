#include "main.h"
/**
 * _strcat - writes the character c to stdout
 * @dest: The character to.
 * @src: The character from.
 * Return: On success dest.
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
