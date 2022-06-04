/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:23:14 by kcheong           #+#    #+#             */
/*   Updated: 2022/06/03 19:38:47 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	while (n > 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n %= 10, fd);
	}
	ft_putchar_fd(n + 48, fd);
}
