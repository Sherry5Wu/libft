/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:20:36 by jingwu            #+#    #+#             */
/*   Updated: 2024/04/25 14:47:29 by jingwu           ###   ########.fr       */
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
	while (*str || c != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (!c)
		return ((char *)(str + ft_strlen(str)));
	return (NULL);
}
