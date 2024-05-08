/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:18:12 by jingwu            #+#    #+#             */
/*   Updated: 2024/04/23 15:06:41 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	DESCRIPTION :
	The function allocates the requested memory and returns a 
	pointer to it.The difference in malloc and calloc is that 
	malloc does not set the memory to zero where as calloc 
	sets allocated memory to zero.

	RETURN VALUE :
	The pointer to the allocated memory. NULL if the memory 
	allocation fails
*/

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*address;

	if (nitems == 0)
		return (NULL);
	if (size > SIZE_MAX / nitems)
		return (NULL);
	address = malloc(nitems * size);
	if (address == NULL)
		return (NULL);
	ft_bzero(address, (nitems * size));
	return (address);
}
