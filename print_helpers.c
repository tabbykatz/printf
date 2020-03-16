#include "holberton.h"
/**
  * print_number - we're printing some serious numbers
  * @n: that's the number, fear it.
  *
  * Return: void
  */
void print_number(unsigned int n)
{
	unsigned int num = n;

	if (num / 10)
		print_number(num / 10);
	_putchar('0' + num % 10);
}

/**
* countDigits - count how many digits the number is
* @num: the number
*
* Return: the count
*/
int countDigits(int num)
{
	int count = 0;

	if (num > 0)
	{
		count++;
		countDigits(num / 10);
	}
	else
	{
		return (count);
	}
	return (count);
}
