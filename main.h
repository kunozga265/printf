#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(va_list ap);
} op_t;
int (*get_op_func(const char * const s))(va_list);
int p_char(va_list ap);
int p_string(va_list ap);

#endif /* MAIN_H */
