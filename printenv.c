#include "shell.h"

int _printenv(char **env)
{
int idx = 0;
	for (; env[idx] != NULL; idx++)
	{
		_printf("%s\n", env[idx]);
	}
return (0);
}
