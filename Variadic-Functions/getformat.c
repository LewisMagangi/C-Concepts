#include "print.h"
#include <stdlib.h>

/**
 * get_format - Selects the correct format to perform
 *               the operation asked by the user.
 * @f: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
 */
void (*get_format(char f))(va_list)
{
	format_t format[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{0, NULL}
	};
	int i = 0;

	while (format[i].f && format[i].f != f)
		i++;

	return (format[i].fp);
}
