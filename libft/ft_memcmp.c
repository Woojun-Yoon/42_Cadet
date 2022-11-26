/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:51:27 by woojun            #+#    #+#             */
/*   Updated: 2022/11/18 00:02:35 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cache1;
	unsigned char	*cache2;
	size_t			index;

	cache1 = (unsigned char *)s1;
	cache2 = (unsigned char *)s2;
	index = 0;
	while (n--)
	{
		if (cache1[index] != cache2[index])
			return (cache1[index] - cache2[index]);
		index++;
	}
	return (0);
}
