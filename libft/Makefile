HEADER = libft.h

LIST =  ft_isdigit.c\
		ft_itoa.c\
		ft_itoau.c\
		ft_memcpy.c\
		ft_putchar.c\
		ft_strdup.c\
		ft_strlen.c\
		ft_to_lower.c\
		ft_str_to_lower.c\
		ft_putstrspec.c

OBJS = ${LIST:.c=.o}

RM = rm -f

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

NAME = libft.a

all : ${NAME}

${NAME}: ${OBJS} ${HEADER}
	${CC} ${CFLAGS} ${LIST}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

clean : 
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re
