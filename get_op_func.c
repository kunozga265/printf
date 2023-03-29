#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * get_op_func - selects function
 * @s: pointer
 * Return: Pointer
 */
int (*get_op_func(const char * const s))(va_list)
{
	op_t ops[] = {
		{"c", p_char},
		{"d", p_int},
		{"i", p_int_s},
		{"s", p_string},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op))
		{
			break;
		}
		i++;
	}
	return (ops[i].f);
}
