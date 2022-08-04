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
	int length, length2;
	int result;
	char *constr;
	struct stat cmdstr;
	
	length = _strlen(strone);
	length2 = _strlen(strtwo);
	length = ((length + length2) + 1);
	constr = _strncat(strone, strtwo, length);
	result = stat(constr, &cmdstr);
	if (result == 0)
	{
		return (strtwo);
		exit(0);
	}
return (constr);
}
