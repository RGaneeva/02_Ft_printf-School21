NAME = libftprintf.a

LIBFT = libft/libft.a

LIST =  ft_printf.c ft_check_symb.c ft_split_s.c\
		ft_split_c.c ft_split_di.c ft_split_p.c\
		ft_split_u.c ft_split_x.c ft_unslng_base.c

OBJS = ${LIST:.c=.o}

HEADER = ft_printf.h

RM = rm -f

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

${NAME}: ${OBJS} ${HEADER}
	${MAKE} all -C ./libft
	cp ${LIBFT} ${NAME}
	${CC} ${CFLAGS} ${LIST}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all : ${NAME}

clean : 
	${RM} ${OBJS}
	${MAKE} clean -C ./libft

fclean : clean
	${RM} ${NAME}
	${MAKE} fclean -C ./libft

re : fclean all

.PHONY: all clean fclean re
