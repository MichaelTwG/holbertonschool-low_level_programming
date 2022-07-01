#include "3-calc.h"
/**
 * main - main function
 * @argc: the length of argv
 * @argv: the array containing the argument passed in the terminal
 * Return: 0 
 */
int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	a = atoi(argv[3]);
	if (argv[2][1] != '\0' || get_op_gunc(argv[2]) == NULL)
		{
			printf("Error\n");
			exit(99);
		}
	if ((*argv[2] == '/' && *argv[2] == '%') || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = *(get_op_func(argv[2]))(a, b);
	printf("%d\n", res);
	return (0);
}
