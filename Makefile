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

.PHONY:		all clean fclean re
