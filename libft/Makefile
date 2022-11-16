# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: woojun <woojun@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 15:31:37 by woojun            #+#    #+#              #
#    Updated: 2022/11/16 15:37:44 by woojun           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Werror -Wextra -Wall

AR = ar
ARFLAGS = rcs

RM = rm
RMFALGS = -f

PART_ONE_SRCS = ./ft_isalpha.c\
				./ft_isdigit.c\
				./ft_toupper.c\
				./ft_tolower.c\
				./ft_isalnum.c\
				./ft_isascii.c\
				./ft_isprint.c\
				./ft_strlen.c\
				./ft_strchr.c\
				./ft_strrchr.c\

# PART_TWO_SRCS = 

SRCS = $(PART_ONE_SRCS)

OBJS = $(SRCS:.c=.o)

.c.o : $(SRCS)
		$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : $(OBJS)
		$(AR) $(ARFLAGS) $@ $^

all : $(NAME)

clean : 
		$(RM) $(RMFALGS) $(OBJS)

fclean : clean
		$(RM) $(RMFALGS) $(NAME)

re : fclean all

.PHONY : all clean fclean re
