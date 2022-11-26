/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:36:52 by woojun            #+#    #+#             */
/*   Updated: 2022/11/21 15:46:53 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cache;
	unsigned char	find;

	cache = (unsigned char *)s;
	find = (unsigned char)c;
	while (n--)
	{
		if (*cache == find)
			return ((void *)cache);
		cache++;
	}
	return ((void *)0);
}
