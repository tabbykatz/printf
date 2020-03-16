#include "holberton.h"
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

	if (num < 0)
	{
		_putchar('-');
		count += 1;
		num = -num;
	}
	count += countDigits(digits);
	print_number(num);
	return (count);
}
