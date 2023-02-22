# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tedelin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 17:28:02 by tedelin           #+#    #+#              #
#    Updated: 2023/02/22 15:51:43 by tedelin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = $(addprefix src/, ft_printf.c ft_csdiuxX.c ft_pu.c)
OBJS = $(addprefix obj/, ft_printf.o ft_csdiuxX.o ft_pu.o)
CC = cc
INCLUDE = -I./include
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar -rsc $(NAME) $(OBJS)

obj/%.o : src/%.c
	mkdir -p $(dir $@)
	$(CC) $(FLAGS) $(INCLUDE) -c -o $@ $^

clean:
	rm -f $(OBJS)
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re