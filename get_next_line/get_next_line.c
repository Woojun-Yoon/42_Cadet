/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:31:33 by woojun            #+#    #+#             */
/*   Updated: 2023/01/11 17:54:35 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "stdio.h"
#include "fcntl.h"

static void	ft_free(char **p)
{
	free(*p);
	*p = NULL;
}

static char	*ft_split_line(char **cache)
{
	size_t	index;
	char	*old_cache;
	char	*line;

	index = 0;
	while ((*cache)[index] != '\n')
		index++;
	old_cache = *cache;
	line = ft_substr(old_cache, 0, index + 1);
	*cache = ft_strdup(&(*cache)[index + 1]);
	free(old_cache);
	return (line);
}
/*
 *
 *
 * 
 */

static ssize_t	ft_read_file(int fd, char **buffer, char **cache)
{
	ssize_t		byte;
	char		*old_cache;

	byte = 1;
	while (!ft_strchr(*cache, '\n') && byte)
	{
		byte = read(fd, *buffer, BUFFER_SIZE);
		if (byte == -1)
			return (byte);
		(*buffer)[byte] = '\0';
		old_cache = *cache;
		*cache = ft_strjoin(old_cache, *buffer);
		free(old_cache);
		old_cache = NULL;
	}
	return (byte);
}
/*
 * ssize_t -> signed int
 * 
 * 
 */

static char	*ft_get_line(int fd, char **buffer, char **cache)
{
	ssize_t		byte;
	char		*result;

	byte = ft_read_file(fd, buffer, cache);
	if (!(**cache) || byte == -1)
	{
		ft_free(cache);
		return (NULL);
	}
	if (ft_strchr(*cache, '\n'))
		return (ft_split_line(cache));
	result = ft_strdup(*cache);
	ft_free(cache);
	return (result);
}
/*
 *
 *
 * 
 */

char	*get_next_line(int fd)
{
	static char	*cache[257];
	char		*buffer;
	char		*result;

	if (0 > fd || BUFFER_SIZE <= 0)
		return (NULL);
	if (!cache[fd])
		cache[fd] = ft_strdup("");
	if (!cache[fd])
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!(buffer))
		return (NULL);
	result = ft_get_line(fd, &buffer, &cache[fd]);
	free(buffer);
	return (result);
}
/*
 * getconf OPEN_MAX ?????? fd??? max value = 256 (MAC)
 * 
 * 
 * 
 * 
 * 
 * 
 */

/*
 * FOR TEST
 * MAIN FUNCTION
 * GL
 */

int	main(void)
{
	char	*result;
	int		fd;

	fd = open("Your text.txt", O_RDONLY);
	result = "";
	while (result)
	{	
		result = get_next_line(fd);
		printf("> %s\n", result);
		free(result);
	}
	return (0);
}
