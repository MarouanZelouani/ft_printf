/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzelouan <mzelouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:07:53 by mzelouan          #+#    #+#             */
/*   Updated: 2023/11/19 18:15:11 by mzelouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	total_len;
	size_t	dest_len;
	size_t	src_len;
	size_t	len;

	if (dest == NULL && size == 0)
		return (ft_strlen(src));
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	if (size == 0 || size <= dest_len)
		return (size + src_len);
	len = 0;
	while (len < size - dest_len - 1 && len < src_len)
	{
		dest[dest_len + len] = src[len];
		len++;
	}
	dest[dest_len + len] = '\0';
	return (total_len);
}
