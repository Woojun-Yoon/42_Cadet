/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:13:29 by woojun            #+#    #+#             */
/*   Updated: 2022/11/16 20:37:28 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	save;
	int		index;

	save = (unsigned char)c;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == save)
			return ((char *)s + index);
		index++;
	}
	if (s[index] == save)
		return ((char *)s + index);
	return ((char *)0);
}
