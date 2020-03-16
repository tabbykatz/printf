#include "holberton.h"
/**
  *  print_o - prints octal numbers from decimal
  * @args: the number
  *
  * Return: number of chars printed
  */
int print_o(va_list args)
{
	int count = 0;
	int decimalNumber = va_arg(args, int);
	unsigned int octalNumber = 0;
	int i = 1;

	while (decimalNumber != 0)
	{
		octalNumber += (decimalNumber % 8) * i;
		decimalNumber /= 8;
		i *= 10;
	}
	count += countDigits(octalNumber);
	print_number(octalNumber);
	return (count);
}
