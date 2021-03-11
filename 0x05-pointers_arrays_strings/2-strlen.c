#include "holberton.h"
/**
* _strlen - returns strlen
* @s: par
* Return: int
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
