#include "main.h"
/**
 *Main:print_alphabet prints the alphabet in lowercase
 *Return: 0 on success
 */

void print_alphabet(void)
{
int n;

for (n = 97; n <= 122; n++)
{
_putchar(n);
}
_putchar('\n');

}
