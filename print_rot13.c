#include "holberton.h"

/**
 * rot13 - encodes and prints a string in rot13
 * @args: va_list with the string to encode as its next element
 *
 * Return: number of characters printed
 */

int rot13(va_list args)
{
	char *str = va_arg(args, char *);
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int idx, count;
	char *encoded;

	encoded = malloc(sizeof(str));

	if (!encoded || !str)
		return (-1);

	for (count = 0; str[count]; count++)
	{
		for (idx = 0; idx < 52; idx++)
		{
			if (str[count] == alphabet[idx])
			{
				encoded[count] = rot13[idx];
				break;
			}
		}
	}

	for (count = 0; encoded[count]; count++)
		_putchar(encoded[count]);

	return (count);
}
