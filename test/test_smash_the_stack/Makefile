##
## Makefile for corewar in /home/tessie_g//afs/rendu/projets/corewar/vm
## 
## Made by adrian tessier
## Login   <tessie_g@epitech.net>
## 
## Started on  Mon Mar 19 11:08:09 2012 adrian tessier
## Last update Tue Apr  3 22:07:25 2012 adrian tessier
##

NAME=	test

SRC=	main.c

OBJ=	$(SRC:.c=.o)

CFLAGS=	-Wall -ansi -pedantic -Wextra

LIB=	-lmy -L./lib

$(NAME):	$(OBJ)
		make -C ./lib
		cc -o $(NAME) $(OBJ) $(LIB)

all:		$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
