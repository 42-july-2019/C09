SCRS	= $(wildcard srcs/*.c)

OBJS	= ${SCRS:.c=.o}

NAME	= libft.a

CC		= gcc
RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror -I/includes

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
