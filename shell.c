#include "shell.h"
/**
 * prompt -  function to get characters from terminal
 * Return: Always 0
 */
int prompt(int argc, char **argv)
{
	int i;

	for(i = 0; i < argc; i++)
	{
		while(argv[i] != EOF)
		{
			printf("#cisfun$ ");
			if(argv[i] == -1)
			{
				printf("./shell: No such file or directory");
			}
		}
	}

}
