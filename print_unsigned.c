/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzelouan <mzelouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 01:33:35 by mzelouan          #+#    #+#             */
/*   Updated: 2023/11/28 01:33:36 by mzelouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int count_digits (unsigned int n)
{
    int count;

    count = 1;
    while (n / 10 != 0)
    {
        n = n/10;
        count++;
    }
    return (count);
}

static char *ft_utoa(unsigned int n)
{
	int			count;
	char		*s;

	count = count_digits(n);
	s = (char *)malloc((count + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	s[count] = '\0';
	while (count > 0)
	{
		s[count - 1] = (n % 10) + 48;
		n /= 10;
		count--;
	}
	return (s);
}

int print_unsigned(unsigned int number)
{
    char *holder;
    int len;
    holder = ft_utoa(number);
    ft_putstr_fd(holder, 1);
	len = ft_strlen(holder);
	free(holder);
    return (len);
}