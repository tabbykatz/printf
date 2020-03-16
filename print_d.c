#include "holberton.h"
#include <stdio.h>
/**
  * print_d - prints decimal numbers, positive and negative
  * @args: the number i'm printing
  *
  * Return: count
  */
int print_d(va_list args)
{

	int num = va_arg(args, int);
	int digits = num;
	int count = 0;
	int retval;

	printf("%d\n", num);
	if (num < 0)
	{
		retval = _putchar('-');
		if (retval == -1)
		{
			count = -1;
			return (count);
		}
		count += 1;
		num = -num;
	}
	retval = print_number(num);
	if (retval == 1)
	{
		count += countDigits(digits);
	}
	else
		count = -1;
	return (count);
}
