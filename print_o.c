#include "holberton.h"
#include <stdio.h>
/**
  *  print_o - prints octal numbers from decimal
  * @args: the number
  *
  * Return: number of chars printed
  */
int print_o(va_list args)
{
	int count = 0;
	unsigned int decimalNumber = va_arg(args, unsigned int);
	int i = 1;
	int remainder;
	char *string;

	count += countOctal(decimalNumber);
	string = malloc(sizeof(char) * (count + 1));
		if (string == NULL)
			return (-1);
	for (i = 1; i < count + 1; i++)
	{
		remainder = decimalNumber % 8;
		decimalNumber = decimalNumber / 8;
		string[count - i] = remainder + '0';
	}
	for (i = 0; i < count; i++)
	{
		_putchar(string[i]);
	}
	return (count);
}
