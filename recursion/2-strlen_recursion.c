#include "main.h"
/**
 * _strlen_recursion - return the lenght of a string
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
