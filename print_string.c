#include "ft_printf.h"

int print_string(char * s)
{
    if (!s)
    {
        ft_putstr_fd("(null)", 1);
        return (6);
    }
    ft_putstr_fd(s, 1);
    return(ft_strlen(s));
}