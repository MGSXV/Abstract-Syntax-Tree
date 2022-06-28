# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 17:31:23 by sel-kham          #+#    #+#              #
#    Updated: 2022/06/28 18:07:48 by sel-kham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES_DIR :=includes
SRC_DIR := src
OBJ_DIR := obj
HEADERS_DIR := $(addprefix $(INCLUDES_DIR)/, headers)

HEADERS := abstract_syntax_tree.h interpreter.h tokenizer.h
HEADERS := $(addprefix $(HEADERS_DIR)/, $(HEADERS))
SRC :=  interpreter.c tokenizer.c
OBJ := $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

NAME := ast
MAIN := $(addprefix $(SRC_DIR)/, abstract_syntax_tree.c)
CFLAGS := -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) $(MAIN)
	$(CC) $(CFLAGS) $(OBJ) $(MAIN) -o $@

obj/%.o : src/%.c $(HEADERS)
	mkdir -p obj
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)/*.o
	
fclean: clean
	rm -rf $(NAME)

re: fclean all
