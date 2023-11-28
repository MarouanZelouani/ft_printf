/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzelouan <mzelouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 01:34:26 by mzelouan          #+#    #+#             */
/*   Updated: 2023/11/28 01:34:27 by mzelouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int print_after_percent(char c, va_list args)
{
    int count;


    count = 0;
    if (c == 'c')
        count += print_character(va_arg(args, int));
    else if (c == 's')
        count += print_string(va_arg(args, char *));
    else if (c == 'd')
        count += print_integer(va_arg(args, int));
    else if (c == 'i')
        count += print_integer(va_arg(args, int));
    else if (c == 'x')
        count += print_hexa(va_arg(args, unsigned int), c);
    else if (c == 'X')
        count += print_hexa(va_arg(args, unsigned int), c);
    else if (c == 'p')
        count += print_pointer(va_arg(args, unsigned long long));
    else if (c == 'u')
        count += print_unsigned(va_arg(args, unsigned int));
    else if (c == '%')
        count += print_character('%');
    return (count);
}

int ft_printf(const char * str, ...)
{
    va_list args;
    int character_count;

    va_start(args, str);
    character_count = 0;
    while (*str != '\0')
    {
        if (*str == '%')
        {
            character_count += print_after_percent(*(++str), args);
        }
        else 
            character_count += print_character(*str);
        str++;
    }
    va_end(args);
    return (character_count);
}