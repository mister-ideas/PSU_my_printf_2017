##
## EPITECH PROJECT, 2017
## Bistro-matic
## File description:
## Makefile
##

all:
		make -C lib/src

clean:
		make clean -C lib/src

fclean:
		make fclean -C lib/src
		rm -f a.out

re:		fclean all

test:
		gcc tests/tests1.c lib/src/*.c -lcriterion
		./a.out
		gcc tests/tests2.c lib/src/*.c -lcriterion
		./a.out
		gcc tests/tests3.c lib/src/*.c -lcriterion
		./a.out
		gcc tests/tests4.c lib/src/*.c -lcriterion
		./a.out

.PHONY:		all clean fclean re
