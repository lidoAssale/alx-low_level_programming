#include "main.h"
/**
 *Description: prints the alphabet in lowercase
 *Return: 0 on success
 */
{
void print_alphabet(void);
char ch;
_putchar("Lowercase characters: \n);

for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar("%c", ch);
}
return (0);
}
