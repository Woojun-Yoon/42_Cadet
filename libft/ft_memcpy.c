/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:02:48 by woojun            #+#    #+#             */
/*   Updated: 2022/11/17 19:09:27 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*cache_dst;
	unsigned char	*cache_src;

	if ((dst == src) || (!n))
		return (dst);
	cache_dst = dst;
	cache_src = (unsigned char *)src;
	while (n--)
		*cache_dst++ = *cache_src++;
	return (dst);
}
