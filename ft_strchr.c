/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:06:42 by kcheong           #+#    #+#             */
/*   Updated: 2022/05/30 14:06:42 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	
	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{	
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	// if c is '\0'
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}

// int	main()
// {
// 	const char s[] = ", Hello, I am Koen.";
// 	int	c = '\0';
// 	char *res1;
// 	char *res2;

// 	res1 = strchr(s, c);
// 	printf("String after [%c] is [%s]\n", c, res1);
// 	res2 = ft_strchr(s, c);
// 	printf("String after [%c] is [%s]\n", c, res1);
// }