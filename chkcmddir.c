#include "shell.h"

/**
 *chkcmddir - A function that concatinates two strings and checks if
 *            the commands are inside the given directory.
 *@strone: Contains the directory to be concatinated with the command.
 *@strtwo: Contains the command to be concatinated with the directory.
 *
 *Return: A string with the concatinated dir and command."
 */

char *chkcmddir(char *strone, char *strtwo)
{
	int length = 0, length2 = 0;
	int result = -1, idx = 0;
	char *constr = NULL, **tokenz = NULL, *slashcon = NULL, *cln = ":";
	struct stat cmdstr;

	tokenz = separate(strone, cln);
	length2 = strlen("hello");
	printf("%d", length2);
	slashcon = _strncat("/", strtwo, length + 2);
	printf("%s:\n", slashcon);
	length2 = _strlen(slashcon);
	while (result == -1 && tokenz[idx] != NULL)
	{
		length = _strlen(tokenz[idx]);
		length = ((length + length2) + 1);
		constr = _strncat(tokenz[idx], slashcon, length);
		result = stat(constr, &cmdstr);
		if (result == 0)
		{
			return (constr);
		}

	}
	exit(0);
}
