#include "main.h"
#include<stdio.h>
/**
 *print_last_digit - prints the last digit of a numer.
 *@n: digit to find the last place of.
 *Return: The last digit.
*/
int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + n);
	return (n);
}
