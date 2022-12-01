NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_puthexamin.c ft_puthexamaj.c ft_putnbr.c ft_putstr.c ft_putunsnbr.c ft_adresse.c

OBJS = ${SRCS:.c=.o}

CC = gcc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) ft_printf.h
	$(CC) $(FLAGS) -c $(SRCS)
	ar -rsc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re