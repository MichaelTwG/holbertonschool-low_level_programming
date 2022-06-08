#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 97; letter <= 122; letter++)
	{
	putchar(letter);
	putchar("\n");
	}
	return (0);
}
