# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muhyildi <muhyildi@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/17 00:00:00 by muhyildi          #+#    #+#              #
#    Updated: 2025/06/17 01:07:39 by muhyildi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_toupper.c ft_tolower.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
       ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_strdup.c \
       ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
       ft_memcmp.c ft_calloc.c ft_atoi.c ft_substr.c ft_strjoin.c \
       ft_strtrim.c ft_split.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
