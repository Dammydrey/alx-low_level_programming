#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - print alphabet in reverse order
 *Return: Always 0 (success)
 */

int main(void)
{
	char fe;

	for (fe = 'z'; fe >= 'a'; fe--)
	putchar(fe);
	putchar('\n');

	return (0);
}
