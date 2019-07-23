NAME	= 	libft.a

SCRS	=	./srcs/ft_putchar.c		\
			./srcs/ft_putstr.c 		\
			./srcs/ft_strcmp.c 		\
			./srcs/ft_strlen.c 		\
			./srcs/ft_swap.c

INCLUDES = ./includes 

OBJS	=	${SRCS:.c=.o}

CC		= gcc
RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror -I ${includes}

.c.o:
			${CC} ${FLAGS} -c &< -o ${<:.c=.o}

${NAME}:	
			${CC} ${FLAGS} -c ./srcs/ft_putchar.c -o ./srcs/ft_putchar.o
			${CC} ${FLAGS} -c ./srcs/ft_putstr.c -o ./srcs/ft_putstr.o
			${CC} ${FLAGS} -c ./srcs/ft_strcmp.c -o ./srcs/ft_strcmp.o
			${CC} ${FLAGS} -c ./srcs/ft_strlen.c -o ./srcs/ft_strlen.o
			${CC} ${FLAGS} -c ./srcs/ft_swap.c -o ./srcs/ft_swap.o
			ar rc ${NAME} ./srcs/ft_putchar.o ./srcs/ft_putstr.o ./srcs/ft_strcmp.o	./srcs/ft_strlen.o ./srcs/ft_swap.o

all:		${NAME}

clean:
			${RM} ./srcs/ft_putchar.o ./srcs/ft_putstr.o ./srcs/ft_strcmp.o	./srcs/ft_strlen.o ./srcs/ft_swap.o

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
