#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	pt_fmt pt_format[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_digit},
		{"i", print_digit},
		{"%", print_percent},
		{"b", func_binary_convert},
		{"u", func_unsig_int},
		{"o", func_octal_convert},
		{"x", func_hex_Lowcase_convert},
		{"X", func_hex_Upcase_convert},
		{NULL, NULL}
	};

	va_list valist;
	int num_ch = 0;

	va_start(valist, format);
	num_ch = get_print(format, valist, pt_format);
	va_end(valist);
	return (num_ch);
}
