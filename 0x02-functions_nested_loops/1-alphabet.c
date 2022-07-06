#include <studio.h>
#include "main.h"
/**
 *Main: prints the alphabet in lowercase
 *Return: 0 on success
 */

void print_alphabet(void);
{
	int n;

for (n = 97; n <= 122; n++)
{
_putchar(n);
}
putchar('\n');
return (0);
}
