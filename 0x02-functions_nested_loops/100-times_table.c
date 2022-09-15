#include "main.h"
#include<stdio.h>
/**
 *print_hundred - print out the digit in the hundred spot
 *@sum: Value to scan for hundred spot
 *Return: Void
*/
static void print_hundred(int sum)
{
	if (sum / 100 == 0)
	{
		_putchar(32);
	}
	else
	{
		_putchar('0' + (sum / 100));
	}
}			
