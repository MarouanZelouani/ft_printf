#include "ft_printf.h"

int print_integer(int number)
{
    char *holder;
    
    holder = ft_itoa(number);
    ft_putstr_fd(holder, 1);
    return (ft_strlen(holder));
}