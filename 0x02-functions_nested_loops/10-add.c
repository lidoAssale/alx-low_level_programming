#include <stdio.h>
#include "main.h"
/**
 * main: adds two integers and gives their result
 * Return: 0 always (sucess)
 */
int add(int, int)
{
int num1, num2;
printf("\nEnter the two numbers : ");
scanf("%d %d", &num1, &num2);

printf("%d + %d = %d\n ", num1, num2, add(num1, num2));
return (0);
}

int add(int a, int b)
{
return(a + b);
}
