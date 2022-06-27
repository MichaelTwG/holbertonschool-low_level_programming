#include "main.h"
/**
 * main - print the name of the program
 * @argc: is unused with (void)argc
 * @argv: is used the position 0 containing the app name
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	res = (atoi(argv[1]) * atoi(argv[2]));
	printf("%d\n", res);
	return (0);
}
