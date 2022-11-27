/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:40:09 by woojun            #+#    #+#             */
/*   Updated: 2022/11/27 17:10:59 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cache;
	t_list	*next_cache;

	if (!(lst) || !(del))
		return ;
	cache = *lst;
	while (cache)
	{
		next_cache = cache -> next;
		ft_lstdelone(cache, del);
		cache = next_cache;
	}
	*lst = NULL;
}
