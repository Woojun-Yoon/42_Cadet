/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:03:54 by woojun            #+#    #+#             */
/*   Updated: 2022/11/22 10:59:27 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*cache1;
	unsigned char	*cache2;
	size_t			index;

	cache1 = (unsigned char *)s1;
	cache2 = (unsigned char *)s2;
	index = 0;
	while ((index < n) && (cache1[index] || cache2[index]))
	{
		if (cache1[index] != cache2[index])
			return (cache1[index] - cache2[index]);
		index++;
	}
	return (0);
}
