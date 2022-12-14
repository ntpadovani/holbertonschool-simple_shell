#include "shell.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int cnt = 0, operation = 0;

	while (operation == 0)
	{
		if ((*(s1 + cnt) == '\0') && (*(s2 + cnt) == '\0'))
			break;
		operation = *(s1 + cnt) - *(s2 + cnt);
		cnt++;
	}

	return (operation);
}
