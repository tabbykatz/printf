#include "holberton.h"
/**
  * print_b - prints binary numbers (unsigned)
  * @args: the number
  *
  *
  * Return: number of chars printed
  */
int print_b(va_list args)
{
	int retval;
	int count = 0;
	unsigned int num = va_arg(args, unsigned int);
	int binaryNum = 0;
	int rem;
	int temp = 1;
	
	if (num == 0)
		retval = _putchar('0');
	while (num)
	{
		rem = num % 2;
		num = num / 2;
		binaryNum = binaryNum + rem * temp;
		temp = temp * 10;
	}
	retval = print_number(binaryNum);
	if (retval == 1)
		count += countDigits(binaryNum);
	else
		count = -1;
	return (count);
}
