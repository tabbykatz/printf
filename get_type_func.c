#include "holberton.h"

int (*get_function(const char *specifier))(va_list)
{
	int idx;

	type_t types[] = {
		{"s", print_s},
		{"c", print_c},
		{"d", print_d},
		{"i", print_d},
		{"b", print_b},
		{"o", print_o},
		{"u", print_d},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"R", rot13},
		{"r", print_rev},
		{NULL, NULL}
	};

	for (idx = 0; types[idx].identifier; idx++)
	{
		if (*specifier == types[idx].identifier[0])
			return (types[idx].print);
	}

	return (NULL);
}