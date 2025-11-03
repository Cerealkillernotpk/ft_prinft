# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 16:57:19 by adakhama          #+#    #+#              #
#    Updated: 2025/11/03 16:17:20 by adakhama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRC = ft_putchar.c\
	ft_printf.c\
	ft_putstr.c\
	ft_strlen.c\
	ft_putbase.c\
	ft_putnbr.c\
	main.c

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	ar rsc $(NAME) $(OBJ)

%.o:%.c
	$(CC) $(CFLAGS) $< -c -o $@

clean: 
	-rm -f $(OBJ)

fclean: clean
	-rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re