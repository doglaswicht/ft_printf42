# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: doglasbastos <marvin@42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 17:38:07 by doglasbas         #+#    #+#              #
#    Updated: 2024/11/18 19:54:52 by dleite-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

SRC = ft_printf.c ft_putptr.c ft_convertion.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_unsigned.c ft_puthex.c
OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT)
	ar rcs $(NAME) $(OBJ) $(LIBFT)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
