NAME = libft.a

SRC = ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
      ft_isprint.c ft_memset.c ft_strlcpy.c ft_strlen.c ft_memcmp.c \
	  ft_memcpy.c ft_memmove.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	  ft_bzero.c ft_atoi.c

all:
	@gcc -o OUTPUT ft_*.c
	@./OUTPUT
	@rm OUTPUT

clean:

fclean:

re:
