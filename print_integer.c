/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzelouan <mzelouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 01:33:50 by mzelouan          #+#    #+#             */
/*   Updated: 2023/11/30 17:47:29 by mzelouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_integer(int number)
{
	char	*holder;
	int		len;

	holder = ft_itoa(number);
	ft_putstr_fd(holder, 1);
	len = ft_strlen(holder);
	free(holder);
	return (len);
}
