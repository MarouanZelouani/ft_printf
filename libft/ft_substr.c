/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzelouan <mzelouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 00:47:10 by mzelouan          #+#    #+#             */
/*   Updated: 2023/11/19 06:13:38 by mzelouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] && i < start)
		i++;
	while (s[i] && j < len)
	{
		i++;
		j++;
	}
	return (j);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_len(s, start, len);
	p = malloc((j + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (i < j && s[i + start])
	{
		p[i] = s[i + start];
		i++;
	}
	p[i] = '\0';
	return (p);
}
