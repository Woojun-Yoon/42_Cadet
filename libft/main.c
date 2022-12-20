/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:28:24 by woojun            #+#    #+#             */
/*   Updated: 2022/11/29 11:19:09 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	*cache;

	cache = (int *)malloc(sizeof(int) * (5));
	ft_memset(cache, 1, 5);
	printf("%d	\n", cache[0]);

	return (0);
}
