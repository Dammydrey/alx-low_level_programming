#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - prints if the number is positive, zero or negative
*Return: Always (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", );
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else (n < 0)
	{
	printf("%d is negative\n", n);
	}
	Return (0);
}
