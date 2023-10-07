# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwisniew <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/23 21:59:52 by bwisniew          #+#    #+#              #
#    Updated: 2023/07/23 23:17:43 by bwisniew         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Wextra -Werror
SRC=srcs/dictionary.c \
	srcs/file.c \
	srcs/parsing.c \
	srcs/search.c \
	srcs/verif.c \
	srcs/digit.c \
	srcs/string.c \
	srcs/main.c
OBJ=$(SRC:.c=.o)
NAME=rush-02

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) srcs/*.o

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
