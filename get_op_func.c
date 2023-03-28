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
		/**
		  * {"i", p_int},
		  * {"f", p_float},
		  */
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
