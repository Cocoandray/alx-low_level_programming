#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: String
 * Return: length.
*/
size_t_strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
