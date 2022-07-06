#include <stdio.h>
#include "main.h"
/**
 * main: adds two integers
 * Return: 0 always (sucess)
 */
int add(int, int)
{
int num1, num2, result;
printf("\nEnter the two numbers : ");
scanf("%d %d", &num1, &num2);

result = sum(num1, num2);

printf("nAddition of two numbers is : ");
return (0);
}

int sum(int num1, int num2)
{
int num3;
num3 = num1 + num2
	return (num3);
}
