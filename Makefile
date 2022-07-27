# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssoares- <ssoares-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/25 04:42:54 by ssoares-          #+#    #+#              #
#    Updated: 2022/07/24 22:08:49 by ssoares-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

MANDATORY =	ft_isalpha.c		ft_isdigit.c		ft_isalnum.c\
			ft_isascii.c		ft_isprint.c		ft_strlen.c\
			ft_memset.c			ft_bzero.c			ft_memcpy.c\
			ft_memmove.c		ft_strlcpy.c		ft_strlcat.c\
			ft_toupper.c		ft_tolower.c		ft_strchr.c\
			ft_strrchr.c		ft_strncmp.c		ft_memcmp.c\
			ft_strnstr.c		ft_calloc.c			ft_strdup.c\
			ft_substr.c			ft_strjoin.c		ft_strtrim.c\
			ft_split.c			ft_itoa.c			ft_strmapi.c\
			ft_striteri.c		ft_putchar_fd.c		ft_putstr_fd.c\
			ft_putendl_fd.c		ft_putnbr_fd.c		ft_memchr.c\
			ft_atoi.c

OBJS = $(MANDATORY:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	ar -rcs $(NAME) $(OBJS) $(HEADER)

%.o : %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
