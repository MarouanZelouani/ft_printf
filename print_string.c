#include "ft_printf.h"

int print_string(char * s)
{
    int count;

    count = 0;
    if (!s)
    {
        ft_putstr_fd("(null)", 1);
        return (6);
    }
    ft_putstr_fd(s, 1);
    return(ft_strlen(s));
}