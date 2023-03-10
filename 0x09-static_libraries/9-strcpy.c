#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 *           terminating null byte, to the buffer pointed to by dest
 *
 * @dest: pointer to destination buffer
 * @src: pointer to source string
 *
 * Return: pointer to destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
