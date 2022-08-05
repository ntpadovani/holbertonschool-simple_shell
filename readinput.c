#include "shell.h"

int main(int argc, char **argv, char **env)
{
	char *buffer = NULL, **command = NULL;/* *path = NULL;*/
	/*char *result = NULL;*/
	size_t size = 0;
	int usrinput = 1;

	(void) argc;
	(void) argv;

	_printf("$: ");
	while ((usrinput = getline(&buffer, &size, stdin)) > 0)
	{
		if (_strcmp(buffer,"exit\n") == 0)
		{
			free(buffer);
			exit(0);
		}
		if (_strcmp(buffer,"env\n") == 0)
                {   
			_printenv(env);
			continue;		
                }   
 
		command = separate(buffer, " \n"); /*tokenize*/
		printf("%s", command[0]);
		/*path = _getpath(env);*/
		/*result = chkcmddir(path, command[0]);*/
		/*conct dir & cmd*/
		spawn_process(command, command[0]);
		_printf("$: ");
	}
	free(buffer);
	return (0);
} /*end*/
