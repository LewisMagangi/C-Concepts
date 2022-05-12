#ifndef PRINT_H
#define PRINT_H

#include <stdarg.h>

/**
 * struct op - A struct op.
 * @f: The format.
 * @fp: The associated function.
 */
typedef struct format
{
	char f;
	void (*fp)(va_list arg);
} format_t;

void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_float(va_list arg);
void print_str(va_list arg);
void print_int(va_list arg);
void (*get_format(char f))(va_list);

#endif /* PRINT_H */
