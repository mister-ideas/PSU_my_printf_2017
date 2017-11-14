##
## EPITECH PROJECT, 2017
## libmy.a
## File description:
## Makefile
##

SRC	=	my_put_nbr.c	\
		my_putchar.c	\
		my_putstr.c	\
		convert_octal.c	\
		convert_hexa.c	\
		my_printf.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		mv $(NAME) ../../

clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f ../../$(NAME)

re:		fclean all

.PHONY:		all clean fclean re
