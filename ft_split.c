/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:55:50 by jingwu            #+#    #+#             */
/*   Updated: 2024/04/25 10:30:16 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || !*(s + 1)))
			count += 1;
		s++;
	}
	return (count);
}

static void	split_into_words(char **dest, const char *src, char c, size_t words)
{
	size_t		i;
	const char	*start;

	i = 0;
	while (*src && i < words)
	{
		if (*src != c)
		{
			start = src;
			while (*src && *src != c)
				src++;
			dest[i] = (char *)malloc(sizeof(char) * (src - start + 1));
			if (!dest[i])
				return ;
			ft_strlcpy(dest[i], start, (src - start + 1));
			i++;
		}
		else
			src++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split_s;
	size_t	words;

	words = count_words(s, c);
	split_s = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split_s)
		return (NULL);
	if (words > 0)
		split_into_words(split_s, s, c, words);
	split_s[words] = 0;
	return (split_s);
}
