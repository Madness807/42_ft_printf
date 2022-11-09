NAME =			libftprintf.a

SRCS =	ft_printf.c\
		./utils/ft_print_char.c\
		./utils/ft_print_str.c\
		./utils/ft_print_int.c\
		./utils/ft_print_addr.c\
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
