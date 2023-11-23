/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzelouan <mzelouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:43:39 by mzelouan          #+#    #+#             */
/*   Updated: 2023/11/17 22:11:52 by mzelouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	slen;
	size_t	i;
	char	*p;

	i = 0;
	slen = ft_strlen(s);
	p = (char *)malloc((slen + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < slen)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
