/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:32:58 by woojun            #+#    #+#             */
/*   Updated: 2022/11/16 20:41:35 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*save;
	char	cache;
	int		index;

	save = (char *)s;
	cache = (unsigned char)c;
	index = ft_strlen(s);
	while (index > 0)
	{
		if (save[index] == cache)
			return ((char *)save + index);
		index--;
	}
	if (save[index] == cache)
		return ((char *)save);
	return ((char *)0);
}
