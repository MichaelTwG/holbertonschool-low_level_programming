#include "main.h"
/**
 * main - print the name of the program
 * @argc: is unused with (void)argc
 * @argv: is used the position 0 containing the app name
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
