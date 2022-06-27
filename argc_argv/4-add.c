#include "main.h"
/**
 * main - add numbers 
 * @argc: the numbers of arguments
 * @argv: the arguments
 * Return: 1 in case of errot, else 0
 */
int main(int argc, char *argv[])
{
	int res = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
