NAME=libftprintf.a

SRC=ft_printf.c \
		ft_hex_pf.c \
		ft_putchar_pf.c \
		ft_putnbr_pf.c \
		ft_putstr_pf.c \
		ft_u_putnbr_pf.c \
		ft_pointer_pf.c

FLAGS = -Wall -Werror -Wextra

CC = gcc ${FLAGS} -c

OBJ = ${SRC:%.c=%.o}

%.o: %.c
	${CC} $<

${NAME}: ${OBJ}
		ar rcs ${NAME} ${OBJ}

all: ${NAME}

clean:
	rm -rf ${OBJ} ${BOBJ}

fclean: clean
		rm -rf ${NAME}

re: fclean $(NAME)

.PHONY: all bonus clean fclean re