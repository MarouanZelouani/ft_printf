/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzelouan <mzelouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:57:11 by mzelouan          #+#    #+#             */
/*   Updated: 2023/11/17 22:43:13 by mzelouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t n)
{
	unsigned char	*t;
	unsigned char	*f;
	size_t			i;

	f = (unsigned char *)from;
	t = (unsigned char *)to;
	i = 0;
	if (!to && !from)
		return (NULL);
	while (i < n)
	{
		t[i] = f[i];
		i++;
	}
	return (to);
}
