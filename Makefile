NAME =			libftprintf.a

SRCS =	ft_printf.c\
		./utils/ft_print_char.c\
		./utils/ft_print_str.c\
		./utils/ft_putnbr_b10.c\
		./utils/ft_putnbr_b16.c\
		./utils/ft_putnbr_addb16.c\
		./utils/ft_print_pourcent.c\
		./utils/ft_putnbr_ub10.c\
		./utils/ft_checkstr.c\

OBJS =			${SRCS:.c=.o}

INCLUDES =		-I includes/ -I libft/

RM =			rm -f

CC =			gcc

CFLAGS =		-Wall -Wextra -Werror

.c.o:
				${CC} ${CFLAGS} ${INCLUDES} -c $< -o ${<:.c=.o}

all:			${NAME}

${NAME}:		${OBJS}
				cd libft && ${MAKE} && mv libft.a ../libftprintf.a
				ar rcs ${NAME} ${OBJS}

clean:
				cd libft && ${MAKE} clean
				${RM} ${OBJS}

fclean:			clean
				cd libft && ${MAKE} fclean
				${RM} ${NAME}

re:				fclean all

.PHONY: 		all clean fclean re
