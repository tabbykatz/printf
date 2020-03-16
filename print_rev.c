#include "holberton.h"

/**
 * _strlen - count the number of characters in a string
 * @str: pointer to a string
 *
 * Return: number of characters in the string
 */

int _strlen(char *str)
{
	int count = 0;

	while (*(str + count))
		count++;

	return (count);
}

/**
 * print_rev - print a string in reverse
 * @args: va_list with the string to print as the next element
 *
 * Return: void
 */

int print_rev(va_list args)
{
	int length, count = 0;
	char *string = va_arg(args, char *);

/*
 * Remove one from length because otherwise it would start printing from the
 * null byte
 */
	length = _strlen(string) - 1;

	while (length >= 0)
	{
		_putchar(*(string + length));
		length--;
		count++;
	}
	return (count);
}
