/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzelouan <mzelouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 01:33:41 by mzelouan          #+#    #+#             */
/*   Updated: 2023/11/28 01:33:42 by mzelouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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