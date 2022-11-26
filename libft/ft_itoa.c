/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:34:32 by woojun            #+#    #+#             */
/*   Updated: 2022/11/24 16:05:23 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

static int	ft_get_len(int num)
{
	int	len;

	if (num <= 0)
		len = 1;
	else
		len = 0;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*result;
	int			sign;
	int			len;

	len = ft_get_len(n);
	if (n < 0)
		sign = 1;
	else
		sign = 0;
	result = (char *)malloc(len + 1);
	if (!(result))
		return (NULL);
	result[len--] = '\0';
	while (len >= 0)
	{
		result[len--] = ft_abs(n % 10) + '0';
		n = ft_abs(n / 10);
	}
	if (sign)
		result[0] = '-';
	return (result);
}
