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

re:		fclean all

test:
		gcc tests/*.c lib/src/*.c -lcriterion
		./a.out

.PHONY:		all clean fclean re
