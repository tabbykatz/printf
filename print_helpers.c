#include "holberton.h"
/**
  * print_number - we're printing some serious numbers
  * @n: that's the number, fear it.
  *
  * Return: void
  */
int  print_number(unsigned long int n)
{
	int retval;
	unsigned long int num = n;

	if (num / 10)
		print_number(num / 10);
	retval = _putchar('0' + num % 10);
	if (retval == -1)
	{
		return (retval);
	}
	return (retval);
}

/**
* countDigits - count how many digits the number is
* @num: the number
*
* Return: the count
*/
int countDigits(long int num)
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
