/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:10:20 by kcheong           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/06/02 16:07:17 by kcheong          ###   ########.fr       */
=======
/*   Updated: 2022/06/02 02:10:19 by kcheong          ###   ########.fr       */
>>>>>>> ab34e4946797288fc7c6c19447f418e515443313
/*                                                                            */
/* ************************************************************************** */

// #ifndef LIBFT_H
// # define LIBFT_H

// #include <unistd.h>
// #include <string.h>
// #include <stdlib.h>
// #include <stdio.h>

// int		ft_isalnum(int c);
// int		ft_isalpha(int c);
// int		ft_isascii(int c);
// int		ft_isdigit(int c);
// int		ft_isprint(int c);
// void	*ft_memset(void *b, int c, size_t len);
// size_t	ft_strlen(const char *s);
// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
// void	*ft_memmove(void *dest, const void *src, size_t n);
// void 	*ft_memcpy(void *dest, const void *src, size_t n);
// size_t	ft_strlcat(char *dst, const char *src, size_t size);
// void	ft_bzero(void *s, size_t n);
// char	*ft_strchr(const char *s, int c);
// char	*strrchr(const char *s, int c);
// int		strncmp(const char *s1, const char *s2, size_t n);
// void	*memchr(const void *s. int c, size_t n);
// char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

// #endif

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h> 

//part 1
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void	*dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void	*src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char	*dst, const char *src, size_t size);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s);

int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

//part 2
char	*ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);

#endif