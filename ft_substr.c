/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:51:31 by kcheong           #+#    #+#             */
/*   Updated: 2022/05/31 15:02:29 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	j = 0;
	if (!dest)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j <= len)
		{
			dest[j] = s[i];
			j++;
		}
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main()
// {
// 	const char s[] = "Hello I am Koen.";
// 	printf("%s\n", ft_substr(s, 6, 16));
// }