/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:16:56 by kcheong           #+#    #+#             */
/*   Updated: 2022/05/25 16:31:52 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <strings.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;

	temp = malloc(size * count);
	// ft_bzero(temp, count);
	//bzero(temp, count);
	return (temp);	
}

/* 
int	main()
{
	printf("%s", ft_calloc(5, 4));
	printf("%s", calloc(5, 4));
}
*/