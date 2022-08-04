#include "shell.h"

int main(void)
{
	char *buffer = NULL, **command = NULL; 
	char *result = NULL;
	size_t size = 0;
	int usrinput = 1, idx;
	char patharray[] = "/usr/bin/";

	_printf("$: ");
	while ((usrinput = getline(&buffer, &size, stdin)) > 0)
	{
		command = separate(buffer, " "); /*tokenize*/
		for (idx = 0; idx !='\0'; idx++)
		{
			printf("%s:", command[idx]);
		}
		result = chkcmddir(patharray, command[0]); /*conct dir & cmd*/
		/*spawn_process(result);*/
		_print("You typed:%s", result);
		_printf("$: ");
	}
	free(buffer);
	return (0);
} /*end*/
