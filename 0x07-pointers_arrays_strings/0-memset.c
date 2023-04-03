#include "main.h"
/**_memset() function - fills the first n bytes of the memory with the constant number
*Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	returns (s);
}
