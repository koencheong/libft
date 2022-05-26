/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:00:12 by kcheong           #+#    #+#             */
/*   Updated: 2022/05/23 14:43:12 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
	// if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	// 	return (1);
	// if (c >= '0' && c <= '9')
	// 	return (1);
	// else
	// 	return (0);
}

/* int	main()
{
	printf("%d\n", ft_isalnum('6'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('+'));
	printf("%d\n", isalnum('6'));
	printf("%d\n", isalnum('a'));
	printf("%d\n", isalnum('A'));
	printf("%d\n", isalnum('+'));
}
*/