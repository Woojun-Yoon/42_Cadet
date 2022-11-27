# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: woojun <woojun@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 15:31:37 by woojun            #+#    #+#              #
#    Updated: 2022/11/27 17:16:18 by woojun           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Werror -Wextra -Wall

AR = ar
ARFLAGS = rcs

RM = rm
RMFALGS = -f

PART_ONE_SRCS = ./ft_isalpha.c		\
				./ft_isdigit.c		\
				./ft_toupper.c		\
				./ft_tolower.c		\
				./ft_isalnum.c		\
				./ft_isascii.c		\
				./ft_isprint.c		\
				./ft_strlen.c		\
				./ft_strchr.c		\
				./ft_strrchr.c		\
				./ft_memset.c		\
				./ft_bzero.c		\
				./ft_memcpy.c		\
				./ft_memmove.c		\
				./ft_memcmp.c		\
				./ft_memchr.c		\
				./ft_strlcpy.c		\
				./ft_strlcat.c		\
				./ft_strncmp.c		\
				./ft_strnstr.c		\
				./ft_atoi.c			\
				./ft_calloc.c		\
				./ft_strdup.c		\

PART_TWO_SRCS = ./ft_substr.c		\
				./ft_strjoin.c		\
				./ft_strtrim.c		\
				./ft_split.c		\
				./ft_itoa.c			\
				./ft_strmapi.c		\
				./ft_striteri.c		\
				./ft_putchar_fd.c	\
				./ft_putstr_fd.c	\
				./ft_putendl_fd.c	\
				./ft_putnbr_fd.c	\

PART_BONUS = 	./ft_lstnew.c		\
				./ft_lstadd_front.c	\
				./ft_lstsize.c		\
				./ft_lstlast.c		\
				./ft_lstadd_back.c	\
				./ft_lstdelone.c	\
				./ft_lstclear.c		\
				./ft_lstiter.c		\
				./ft_lstmap.c		\

SRCS = 	$(PART_ONE_SRCS)			\
		$(PART_TWO_SRCS)			\

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(PART_BONUS:.c=.o)

ifdef BONUS
	ALL_OBJS = $(OBJS) $(OBJS_BONUS)
else
	ALL_OBJS = $(OBJS)
endif

.c.o : $(SRCS)
		$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : $(ALL_OBJS)
		$(AR) $(ARFLAGS) $@ $^

all : $(NAME)
# sleep 1 was check for tester
bonus :
		sleep 1
		make BONUS=1 all

clean : 
		$(RM) $(RMFALGS) $(OBJS) $(OBJS_BONUS)

fclean : clean
		$(RM) $(RMFALGS) $(NAME)

re : fclean all

.PHONY : bonus all clean fclean re
