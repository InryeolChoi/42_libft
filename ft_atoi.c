/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inchoi <inchoi@student.42Seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:34:13 by inchoi            #+#    #+#             */
/*   Updated: 2023/03/17 19:41:56 by inchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_blank(char c)
{
	if (c >= 9 && c <= 13)
		return (1);
	else if (c == 32)
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	sign = 1;
	while (*str && is_blank(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	num = 0;
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	return (sign * num);
}
