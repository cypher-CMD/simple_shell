#include <stdio.h>
#include "shell.h"
/**
 * main - Entry function
 * @argc:
 * @argv:
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	printf("\n");
}
