# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knaumov <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 12:36:39 by knaumov           #+#    #+#              #
#    Updated: 2018/09/18 13:59:41 by knaumov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror 
INCLUDES = -I src

$(NAME):
	gcc $(FLAGS) -c src/*.c
	ar rc $(NAME) ./*.o
	ranlib $(NAME)

all: $(NAME)

clean:
	/bin/rm -f ./*.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
