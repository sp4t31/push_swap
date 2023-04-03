# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spatel <spatel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/03 14:33:21 by spatel            #+#    #+#              #
#    Updated: 2023/04/03 14:50:47 by spatel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
OS = $(shell uname) # necessary?

CC = gcc # clang for more detail?
CFLAGS = -Wall -Werror -Wextra -g -std=c99
MAKEFLAGS += --warn-undefined-variables
	# is this being used

INCL = ./includes

SRC_PATH = src/
SRC_FILES = main.c
SRC = $(addprefix $(SRC_PATH), $(SRC_FILES))
	# does function call 'addprefix' require $()

all:
	$(CC) $(CFLAGS) $(SRC) -I $(INCL) -o $(NAME)

test:

clean:
	rm-rf $(NAME)
	# clean objects??

fclean: clean

re: fclean all

.PHONY: all clean fclean re
.SHELLFLAGS := -eu -o pipefail -C
	# Bash strict mode prevents subtle bugs
	# What do flags & cmd mean?
.DELETE_ON_ERROR: