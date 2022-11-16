/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:38:29 by woojun            #+#    #+#             */
/*   Updated: 2022/11/16 15:37:59 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
	char str[] = "TESTSTRING";
	
	printf("isalpha %d\n", ft_isalpha('0'));
	printf("isdigit %d\n", ft_isdigit('1'));
	printf("toupper %c\n", ft_toupper('a'));
	printf("tolower %c\n", ft_tolower('B'));
	printf("isalnum %d\n", ft_isalnum('a'));
	printf("isascii %d\n", ft_isascii('a'));
	printf("strchr %s\n", ft_strchr(str, 'S'));
	printf("strrchr %s\n", ft_strrchr(str, 'S'));
	
	return 0;
}
