/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:23:14 by kcheong           #+#    #+#             */
/*   Updated: 2022/06/04 15:14:51 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*temp;

	temp = ft_itoa(n);
	if (!temp)
		return ;
	ft_putstr_fd(temp, fd);
	free(temp);
}

// int main()
// {
// 	ft_putnbr_fd(123, 1);
// 	system("leaks putnbr_test.out");
// 	return (0);
// }