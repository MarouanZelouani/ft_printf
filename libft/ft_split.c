/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzelouan <mzelouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:40:46 by mzelouan          #+#    #+#             */
/*   Updated: 2023/11/17 16:47:58 by mzelouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c);
static int		set_words(char **str, const char *s, char c);
static int		free_all(char **str, int word);

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	len;

	if (s == NULL)
		return (NULL);
	len = count_words(s, c);
	p = (char **)malloc((len + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	if (!set_words(p, s, c))
		return (0);
	p[len] = 0;
	return (p);
}

static int	free_all(char **str, int word)
{
	while (word + 1)
		free(str[word--]);
	free(str);
	return (0);
}

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	int		flag;
	size_t	count;

	i = 0;
	flag = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			flag = 0;
		else if (s[i] != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static int	set_words(char **str, const char *s, char c)
{
	int	len;
	int	word;
	int	start;

	word = 0;
	start = 0;
	while (s[start])
	{
		len = 0;
		if (s[start + len] != c)
		{
			while (s[start + len] && s[start + len] != c)
				len++;
			str[word] = ft_substr(s, start, len);
			if (str[word] == NULL)
				return (free_all(str, word));
			word++;
		}
		if (len == 0)
			start++;
		else
			start = start + len;
	}
	return (1);
}
