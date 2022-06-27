#include "main.h"
#include "_putchar.c"
/**
 * main -
 * @argc:
 * @argv:
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for(i = 0; argv[0][i]; i++)
	{
		_putchar(argv[0][i]);
	}
	return(1);
}
