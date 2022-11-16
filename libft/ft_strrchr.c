/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:32:58 by woojun            #+#    #+#             */
/*   Updated: 2022/11/16 17:17:27 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*save;
	char	cache;

	save = (char *)0;
	cache = c;
	while (1)
	{	
		if (*s == (char)c)
			save = (char *)s;
		if (*s == '\0')
			return (save);
		s++;
	}
}
