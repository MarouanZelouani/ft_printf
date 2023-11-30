# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzelouan <mzelouan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 01:34:12 by mzelouan          #+#    #+#              #
#    Updated: 2023/11/30 13:53:19 by mzelouan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HFILE = ft_printf.h

SRC =	ft_printf.c\
			print_character.c\
			print_hexa.c\
			print_integer.c\
			print_pointer.c\
			print_string.c\
			print_unsigned.c\
			ft_isalpha.c\
			ft_toupper.c\
			ft_strlen.c\
			ft_putstr_fd.c\
			ft_putchar_fd.c\
			ft_itoa.c\

OB = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f
CC = cc

all : $(NAME) 

$(NAME) : $(OB) $(HFILE)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@

re : fclean all

clean : 
	$(RM) $(OB)

fclean : clean 
	$(RM) $(NAME)

.PHONY : all clean fclean re
