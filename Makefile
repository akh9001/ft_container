# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/29 15:09:46 by akhalidy          #+#    #+#              #
#    Updated: 2022/04/29 16:15:48 by akhalidy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean vector map stack set

CC = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98 #-g -fsanitize=address

all: vector map stack

vector:
	@$(CC) $(FLAGS)	tests/vector_test.cpp -o vector.out

map:
	@$(CC) $(FLAGS)	tests/map_test.cpp -o map.out

stack:
	@$(CC) $(FLAGS)	tests/stack_test.cpp -o stack.out

bonus : set
set:
	@$(CC) $(FLAGS)	tests/set_test.cpp -o set.out
clean:
	rm -f vector.out map.out stack.out set.out
fclean: clean
re : fclean all