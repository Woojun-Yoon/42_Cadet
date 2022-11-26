/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojun <woojun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:06:15 by woojun            #+#    #+#             */
/*   Updated: 2022/11/25 18:49:48 by woojun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_num(int n, int fd)
{
	if (n >= 10)
		ft_print_num(n / 10, fd);
	write(fd, &("0123456789"[n % 10]), 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putnbr_fd(n / 10, fd);
			write(fd, "8", 1);
			return ;
		}
		else
		{
			write(fd, "-", 1);
			n *= -1;
		}
	}
	ft_print_num(n, fd);
}
