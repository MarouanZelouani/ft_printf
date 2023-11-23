/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzelouan <mzelouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:12:54 by mzelouan          #+#    #+#             */
/*   Updated: 2023/11/19 22:19:55 by mzelouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long int n)
{
	int	count;

	count = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	is_negative(int *sign, long int *number)
{
	if (*number < 0)
	{
		*sign = 1;
		*number *= -1;
	}
}

char	*ft_itoa(int n)
{
	int			sign;
	long int	number;
	int			count;
	char		*s;

	sign = 0;
	number = (long int)n;
	is_negative(&sign, &number);
	count = count_digits(number);
	s = (char *)malloc((count + sign + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (sign == 1)
		s[0] = '-';
	s[count + sign] = '\0';
	while (count > 0)
	{
		s[sign + count - 1] = (number % 10) + 48;
		number /= 10;
		count--;
	}
	return (s);
}
