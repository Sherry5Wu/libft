/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:33:19 by jingwu            #+#    #+#             */
/*   Updated: 2024/05/06 09:07:48 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int				sign;
	long long int	integer;
	long long int	check;

	sign = 1;
	integer = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		check = integer * 10 + (*str - '0');
		if ((check / 10) != integer && sign == -1)
			return (0);
		if ((check / 10) != integer && sign == 1)
			return (-1);
		integer = check;
		str++;
	}
	return (((int)integer) * sign);
}