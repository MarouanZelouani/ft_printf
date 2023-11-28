/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzelouan <mzelouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 01:33:46 by mzelouan          #+#    #+#             */
/*   Updated: 2023/11/28 01:33:47 by mzelouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int Hexa_len (uintptr_t number)
{
    int len;

    len = 0;
    while (number != 0)
    {
        number = number/16;
        len++;
    }
    return (len);
}

int print_pointer(uintptr_t p)
{
    char s[] = "0123456789abcdef";
    char *holder;
    int remainder;
    int len;
    
    if (p == 0)
    {
        ft_putstr_fd("(nil)", 1);
        return (5);
    }
    ft_putstr_fd("0x", 1);
    len = Hexa_len(p);
    holder = (char *) malloc ((len + 1) * sizeof(char));
    holder[len] = '\0';
    while (p != 0) {
        remainder = 0;
        remainder = p % 16;
        
        if (remainder < 10) {
            holder[len - 1] = s[remainder];
            len--;
        } else {
            holder[len - 1] = s[remainder];
            len--;
        }
        p = p / 16;
    }
    ft_putstr_fd(holder, 1);
    len = ft_strlen(holder) + 2;
    free(holder);
    return (len);
}