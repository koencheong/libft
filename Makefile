NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC = ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
      ft_isprint.c ft_memset.c ft_strlcpy.c ft_strlen.c

all:
	@gcc $(CFLAGS) -o OUTPUT main.c ft_*.c
	@./OUTPUT
	@rm OUTPUT

clean:

fclean:

re:
