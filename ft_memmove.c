/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:07:36 by kcheong           #+#    #+#             */
/*   Updated: 2022/05/31 00:32:12 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char  *s;
   char  *d;

   s = (char *)src;
   d = (char *)dest;
   if (!s && !d)
      return (0);
   if (s < d)
      while (n < (n - 1))
      {
         d[n] = s[n];
         n--;
      }
   else
      ft_memcpy(d, s, n);
   return (dest);
}

/*int main() 
{
   char dest[] = "koen";
   const char src[]  = "hello";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 3);
   printf("After memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 3);
   printf("After ft_memmove dest = %s, src = %s\n", dest, src);
   return(0);
}*/