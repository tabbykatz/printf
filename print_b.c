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
	int count = 0;
	unsigned int num = va_arg(args, unsigned int);
	int binaryNum = 0;
	int rem;
	int temp = 1;

	while (num)
	{
		rem = num % 2;
		num = num / 2;
		binaryNum = binaryNum + rem * temp;
		temp = temp * 10;
	}
	count += countDigits(binaryNum);
	print_number(binaryNum);
	return (count);
}
