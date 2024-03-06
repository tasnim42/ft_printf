# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 17:53:04 by tzorai            #+#    #+#              #
#    Updated: 2023/12/27 17:57:08 by tzorai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SOURCES = ft_printf.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putptr.c\
		ft_putnbr.c\
		ft_un_putnbr.c\
		ft_hexalow.c\
		ft_hexacap.c\

# HEADERS = libftprintf.h

OBJECT = $(SOURCES:.c=.o)

$(NAME): $(OBJECT)
	@ar rc $(NAME) $(OBJECT)

%.o: %.c
	$(CC) $(FLAGS) -I. -c $< -o $@

all: $(NAME)

clean:
	@rm -rf $(OBJECT)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
