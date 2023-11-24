NAME = libftprintf.a
LIBFT = ./libft/libft.a
HFILE = ft_printf.h

SRC =	ft_printf.c\
			print_character.c\
			print_hexa.c\
			print_integer.c\
			print_pointer.c\
			print_string.c\
			print_unsigned.c\

OB = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f
CC = cc

all : $(NAME) 

$(NAME) : $(OB) $(HFILE)
	$(MAKE) -C ./libft 
	cp libft/libft.a $(NAME)
	$(AR) $(NAME) $(OB)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

re : fclean all

clean : 
	$(RM) $(OB)
	$(MAKE) clean -C ./libft

fclean : clean 
	$(RM) $(NAME)
	$(MAKE) fclean -C ./libft

.PHONY : all clean fclean re
