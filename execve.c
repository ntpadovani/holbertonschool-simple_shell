#include "shell.h"

/**
 * spawn_process - creates a child process and executes a command
 * @args: an array
 *
 * Return: 0 if process executed succesfully,
 */




int spawn_process(char *args[])
{

	pid_t ppid;
	int status = 0, wstatus;

	ppid = fork();
	if (ppid == -1)
	{
		perror("Error: forking");
	}

	if (ppid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			status = 1;
			return (status);
		}
	}
	else
	{
		wait(&wstatus);
		EXIT_CODE = WEXITSTATUS(wstatus);
	}
	return (status);
}
