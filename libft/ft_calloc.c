/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzelouan <mzelouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:20:11 by mzelouan          #+#    #+#             */
/*   Updated: 2023/11/19 21:37:36 by mzelouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t b, size_t size)
{
	void	*p;
	size_t	to_size;

	to_size = b * size;
	if (b && (to_size / b != size))
		return (NULL);
	p = (void *)malloc(to_size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, to_size);
	return (p);
}
