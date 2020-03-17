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
	unsigned int decimalNumber = va_arg(args, unsigned int);
	int i = 1;
	char *string;

	count += countBinary(decimalNumber);
	string = malloc(sizeof(char) * (count + 1));
		if (string == NULL)
			return (-1);
	for (i = 1; i < count + 1; i++)
	{
		string[count - i] = decimalNumber % 2;
		decimalNumber = decimalNumber / 2;
	}
	for (i = 0; i < count; i++)
	{
		_putchar(string[i] + '0');
	}
	return (count);
}
