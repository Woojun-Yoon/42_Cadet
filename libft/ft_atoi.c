/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:32:56 by woojun            #+#    #+#             */
/*   Updated: 2022/11/22 17:53:43 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\r'\
	|| c == '\n' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long	result;
	long	sign;
	size_t	index;

	result = 0;
	sign = 1;
	index = 0;
	while (str[index] != '\0' && ft_isspace(str[index]))
		index++;
	if (str[index] == '-')
		sign = -1;
	if (str[index] == '-' || str[index] == '+')
		index++;
	while ((str[index] != '\0') && (ft_isdigit(str[index])))
	{
		result = (result * 10) + (str[index] - '0');
		if (result > 2147483647 && sign == 1)
			return (-1);
		if (result > 2147483648 && sign == -1)
			return (0);
		index++;
	}
	return (sign * result);
}
