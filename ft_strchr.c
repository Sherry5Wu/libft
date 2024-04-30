/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:20:36 by jingwu            #+#    #+#             */
/*   Updated: 2024/04/30 13:51:26 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	DESCRIPTION :
	The function ft_strchr finds the first occurence of character c in
	string str.

	RETURN VALUE :
	A pointer to the first occurence of c in str.
	NULL if c is not found.
*/

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (i < (ft_strlen(str) + 1))
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
