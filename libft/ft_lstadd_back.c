/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:46:33 by woojun            #+#    #+#             */
/*   Updated: 2022/11/27 16:04:34 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cache;

	if (!(lst) || !(new))
		return ;
	cache = ft_lstlast(*lst);
	if (!(cache))
		ft_lstadd_front(lst, new);
	else
		cache -> next = new;
}
