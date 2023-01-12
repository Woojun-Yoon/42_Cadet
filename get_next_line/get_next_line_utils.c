/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:37:07 by woojun            #+#    #+#             */
/*   Updated: 2023/01/03 18:31:49 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	index;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) <= start)
		return (ft_strdup(""));
	if ((unsigned int)ft_strlen(s) - start < len)
		len = (unsigned int)ft_strlen(s) - start;
	result = malloc(sizeof(char) * (len + 1));
	if (!(result))
		return (NULL);
	s = s + start;
	index = 0;
	while (*s)
	{
		if (index < len)
			result[index++] = *s;
		s++;
	}
	result[index] = '\0';
	return (result);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	index;
	char	*result;

	if (!(s1) && !(s2))
		return (NULL);
	else if (!(s1))
		return (ft_strdup(s2));
	else if (!(s2))
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!(result))
		return (NULL);
	index = 0;
	while (*s1)
		result[index++] = *s1++;
	while (*s2)
		result[index++] = *s2++;
	result[index] = '\0';
	return (result);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	save;
	size_t			index;

	if (!(s))
		return (NULL);
	save = (unsigned char)c;
	index = 0;
	while (s[index])
	{
		if (s[index] == save)
			return ((char *)s + index);
		index++;
	}
	if (s[index] == save)
		return ((char *)s + index);
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	index;

	if (!(s1))
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!dst)
		return (NULL);
	index = 0;
	while (s1[index])
	{
		dst[index] = s1[index];
		index++;
	}
	dst[index] = '\0';
	return (dst);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
