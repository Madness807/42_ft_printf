NAME =			libftprintf.a

SRCS =	ft_printf.c\
		./utils/ft_printchar.c\
		./utils/ft_printstr.c\
		./utils/ft_printchar.c\
		./utils/ft_printint.c\
		./utils/ft_checkstr.c

OBJS =			${SRCS:.c=.o}

INCLUDES =		includes/

RM =			rm -f

CC =			gcc

CFLAGS =		-Wall -Wextra -Werror

.c.o:
				${CC} ${CFLAGS} -I ${INCLUDES} -c $< -o ${<:.c=.o}

all:			${NAME}

${NAME}:		${OBJS}
				ar rcs ${NAME} ${OBJS}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY: 		all clean fclean re
