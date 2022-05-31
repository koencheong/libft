/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:07:36 by kcheong           #+#    #+#             */
/*   Updated: 2022/05/27 16:11:31 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst > src) 
   {
      i = len - 1;
      while (len > 0)
      {
         ((char *)dst)[i] = ((char *)src)[i];
         i--;
         len--;
      }
   }
   else
   {
      i = 0;
      while (i < len)
      {
         ((char *)dst)[i] = ((char *)src)[i];
         i++;
      }
   }
   return (dst);
}

/*int main () 
{
   char dest[] = "hello";
   const char src[]  = "ha12";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 3);
   printf("After memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 3);
   printf("After ft_memmove dest = %s, src = %s\n", dest, src);
   return(0);
}*/

// dest 0xasd0013 z   14 y  15 x  16 l  17 o
// src  0xasd0012 z   13 y  14 x