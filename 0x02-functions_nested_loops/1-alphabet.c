#include "main.h"
/**
 *Main: print_alphabet- prints the alphabet in lowercase
 *
 * Return: 0 always (success)
 */

void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');

}
