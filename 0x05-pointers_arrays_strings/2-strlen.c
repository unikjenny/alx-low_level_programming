#include <stdio.h>
/**
 * _strlen - Returns the lenght of a a string
 * @str: The string to get the lenght of
 * Return: The lemngthy of @str
 */
size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
