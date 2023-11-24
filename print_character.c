#include "ft_printf.h"

int print_character(char c)
{
    ft_putchar_fd(c, 1);
    return (1);
}