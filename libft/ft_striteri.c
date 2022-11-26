/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:57:45 by woojun            #+#    #+#             */
/*   Updated: 2022/11/24 17:18:41 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{	
	unsigned int	index;

	if (!(s) || !(f))
		return ;
	index = 0;
	while (s[index])
	{
		f(index, s + index);
		index++;
	}
}
