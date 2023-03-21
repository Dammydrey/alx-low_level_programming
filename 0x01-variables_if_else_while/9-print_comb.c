#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints combinations of single digit
 *Return: Always 0 (success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	if (d != '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
