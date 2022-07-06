#include "main.h"
/**
 * main: print_alphabet_x10 - print lowercase alphabet
 * Return: 0 always (succes)
 */
void print_alphabet_x10(void)
{
int a, i;
for (a = 0; a <= 9; a++)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
}
}
