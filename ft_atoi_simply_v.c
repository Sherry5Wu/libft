/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:33:19 by jingwu            #+#    #+#             */
/*   Updated: 2024/04/23 14:16:20 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	integer;

	sign = 1;
	integer = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		integer = integer * 10 + (*str - '0');
		str++;
	}
	return (integer * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	const char	*str1 = "9223372036854775809";
	const char	*str2 = "9223372036854775809";
	
	printf("str1=%d\n", ft_atoi(str1));
	printf("str2=%d\n", atoi(str2));
	return (0);
}