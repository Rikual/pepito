NAME		=	pepito
CC		=	gcc

CFLAGS		+=	-Wextra -Wall -ggdb
LDFLAGS		= 	-L./lib_linux -lsecret

SRCS		=	main.c daemon.c network.c utils.c

OBJS		=	${SRCS:.c=.o}

${NAME}:	${OBJS}
		${CC} ${OBJS} -o ${NAME} ${LDFLAGS}

all:		${NAME}

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
