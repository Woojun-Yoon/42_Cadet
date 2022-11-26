/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:41:16 by woojun            #+#    #+#             */
/*   Updated: 2022/11/23 14:49:53 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	index;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	index = ft_strlen(s + start);
	if (index >= len)
		index = len;
	result = malloc(sizeof(char) * (index + 1));
	if (!(result))
		return (NULL);
	ft_strlcpy(result, s + start, index + 1);
	return (result);
}
