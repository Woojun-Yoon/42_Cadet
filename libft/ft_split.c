/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:44:24 by woojun            #+#    #+#             */
/*   Updated: 2022/11/26 18:11:05 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static size_t	ft_count_words(char const *s, char c)
{
	size_t	flag;
	size_t	result;

	flag = 0;
	result = 0;
	while (*s)
	{
		if (flag == 0 && *s != c)
		{
			flag = 1;
			result++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (result);
}

static char	*ft_get_word(char const *str, int len)
{
	char	*word;
	int		index;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!(word))
		return (NULL);
	index = 0;
	while (index < len)
	{
		word[index] = str[index];
		index++;
	}
	word[index] = '\0';
	return (word);
}

static void	ft_free(char **result, int index)
{
	while (index--)
	{
		free(result[index]);
		result[index] = NULL;
	}
	free(result);
	result = NULL;
	return ;
}

static void	ft_do_split(char const *s, char c, char **result)
{
	int		index;
	int		cache;
	int		word_count;

	index = 0;
	word_count = 0;
	while (s[index])
	{
		while (s[index] == c)
			index++;
		if (!(s[index]))
			break ;
		cache = index;
		while (s[index] != c && s[index])
			index++;
		result[word_count] = ft_get_word(s + cache, index - cache);
		if (!(result[word_count]))
		{
			ft_free(result, word_count);
			return ;
		}
		word_count++;
	}
	result[word_count] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!(s))
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!(result))
		return (NULL);
	ft_do_split(s, c, result);
	return (result);
}
*/

static int	ft_check_sep(char c, char charset)
{
	if (charset == '\0')
		return (c == '\0');
	if (charset == c)
		return (1);
	return (0);
}

static int	ft_strlen_charset(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && !ft_check_sep(s[i], c))
		i++;
	return (i);
}

static char	*ft_print_word(char const *s, char c)
{
	int		len_strs;
	int		i;
	char	*strs;

	i = 0;
	len_strs = ft_strlen_charset(s, c);
	strs = malloc(sizeof(char) * (len_strs + 1));
	if (!(strs))
		return (NULL);
	while (i < len_strs)
	{
		strs[i] = s[i];
		i++;
	}
	strs[i] = '\0';
	return (strs);
}

static int	ft_count_strings(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && ft_check_sep(s[i], c))
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && !ft_check_sep(s[i], c))
			i++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	int		i;

	i = 0;
	strs = malloc(sizeof(char *) * (ft_count_strings(s, c) + 1));
	if (!(strs))
		return (NULL);
	while (*s != '\0')
	{
		while (*s != '\0' && ft_check_sep(*s, c))
			s++;
		if (*s != '\0')
		{
			strs[i] = ft_print_word(s, c);
			i++;
		}
		while (*s != '\0' && !ft_check_sep(*s, c))
			s++;
	}
	strs[i] = 0;
	return (strs);
}
