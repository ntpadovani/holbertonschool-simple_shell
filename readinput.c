#include "shell.h"

int main(int argc, char **argv, char **env)
{
	char *buffer = NULL, **command = NULL, *path = NULL;
	char *result = NULL;
	size_t size = 0;
	int usrinput = 1, idx;

	(void) argc;
	(void) argv;

	_printf("$: ");
	while ((usrinput = getline(&buffer, &size, stdin)) > 0)
	{
		command = separate(buffer, " "); /*tokenize*/
		for (idx = 0; idx !='\0'; idx++)
		{
			_printf("%s:", command[idx]);
		}

		path = _getpath(env);
		result = chkcmddir(path, command[0]);
		printf("%s\n", result);
		/*conct dir & cmd*/
		/*spawn_process(result);*/
		_printf("You typed:%s", result);
		_printf("$: ");
	}
	free(buffer);
	return (0);
} /*end*/
