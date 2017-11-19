SRC_DIR= 	../lib/src

SRC= 		$(SRC_DIR)/my_put_nbr.c 		\
		$(SRC_DIR)/my_putchar.c 		\
		$(SRC_DIR)/my_putstr.c			\
		$(SRC_DIR)/convert_octal.c 		\
		$(SRC_DIR)/convert_hexa.c		\
		$(SRC_DIR)/convert_bin.c		\
		$(SRC_DIR)/replace_non_printables.c	\
		$(SRC_DIR)/print_chars.c		\
		$(SRC_DIR)/print_numbers.c		\
		$(SRC_DIR)/print_hexa.c			\
		$(SRC_DIR)/print_format.c		\
		$(SRC_DIR)/my_printf.c

SRC_UT_DIR= 	.

SRC_UT= 	$(SRC_UT_DIR)/tests.c

OBJ= 		$(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS= 	-Wall -Wextra --coverage

LDFLAGS= 	-lcriterion -lgcov

NAME= 		units

all: 		$(NAME)

$(NAME): 	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME)

re:	 	fclean all
