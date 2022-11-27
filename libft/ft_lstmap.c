/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:16:05 by woojun            #+#    #+#             */
/*   Updated: 2022/11/27 17:56:48 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*cache;
	void	*new_content;

	if (!(lst) || !(f) || !(del))
		return ((t_list *) NULL);
	result = NULL;
	while (lst)
	{	
		new_content = f(lst -> content);
		cache = ft_lstnew(new_content);
		if (!(cache))
		{	
			del(new_content);
			ft_lstclear(&result, del);
			return ((t_list *) NULL);
		}
		ft_lstadd_back(&result, cache);
		lst = lst -> next;
	}
	return (result);
}
