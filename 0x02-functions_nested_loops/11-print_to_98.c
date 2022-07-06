#include <stdio.h>
#include "main.h"
/**
 * main: print_to_98
 * Discription: prints all natural numbers from n to 98
 * Return 0 always (success)
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
	printf("%d, ", n--);
printf("%d\n", n);
}

else
{
while (n < 98)
	printf("%d, ", n==);
printf("%d\n",n)
}
}
