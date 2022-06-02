/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:14:46 by kcheong           #+#    #+#             */
/*   Updated: 2022/06/01 15:14:46 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c);

int main()
{
  char s[] = "hello//a/world";
  int i = 0;
  char **res = ft_split(s, '/');
  while (res[i])
  {
	  printf("%s\n", res);
  }
}
