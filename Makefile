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

INCL_PATH = ./includes
SRC_PATH = src/
UTILS_PATH = utils/

SRC_FILES = main.c
UTILS_FILES = ft_atoi.c \
	ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstnew.c

SRC = $(addprefix $(SRC_PATH), $(SRC_FILES))
UTILS = $(addprefix $(UTILS_PATH), $(UTILS_FILES))

all:
	$(CC) $(CFLAGS) $(SRC) ${UTILS} -I $(INCL) -o $(NAME)

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