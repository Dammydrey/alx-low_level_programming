#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - print numbers in base 16
 *Return: Always 0 (success)
 */
int main(void)
{
	int num;
	char fe;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (fe = 'a'; fe <= 'f'; fe++)
		putchar(fe);
	return (0);
}
