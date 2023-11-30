/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzelouan <mzelouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 01:33:54 by mzelouan          #+#    #+#             */
/*   Updated: 2023/11/30 18:09:23 by mzelouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexa_len(unsigned int number)
{
	int	len;

	len = 0;
	while (number != 0)
	{
		number = number / 16;
		len++;
	}
	return (len);
}

static void	change_holder(char *s, char c)
{
	int	i;

	i = 0;
	if (c == 'X')
	{
		while (s[i])
		{
			if (ft_isalpha(s[i]))
				s[i] = ft_toupper(s[i]);
			i++;
		}
	}
}

static void	stora_ma9edouch(unsigned int number, int len, char *holder)
{
	int		remainder;
	char	*s;

	s = "0123456789abcdef";
	while (number != 0)
	{
		remainder = 0;
		remainder = number % 16;
		if (remainder < 10)
		{
			holder[len - 1] = s[remainder];
			len--;
		}
		else
		{
			holder[len - 1] = s[remainder];
			len--;
		}
		number = number / 16;
	}
}

int	print_hexa(unsigned int number, char c)
{
	char	*holder;
	int		len;

	if (number == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	len = hexa_len(number);
	holder = (char *)malloc((len + 1) * sizeof(char));
	holder[len] = '\0';
	stora_ma9edouch(number, len, holder);
	change_holder(holder, c);
	ft_putstr_fd(holder, 1);
	len = ft_strlen(holder);
	free(holder);
	return (len);
}
