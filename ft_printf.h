#ifndef FT_PRINTF_H
#define FT_PRNTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>

//the path to libft header file
#include "./libft/libft.h"

int ft_printf(const char * str, ...);
int print_charactre(char c);
int print_string(char * s);
int print_integer(int number);
int print_hexa(unsigned int number, char c);
int print_pointer(uintptr_t number);
int print_unsigned(unsigned int number);

#endif