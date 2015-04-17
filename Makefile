# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crenault <crenault@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/01 14:48:08 by cchevall          #+#    #+#              #
#    Updated: 2015/04/11 18:22:33 by crenault         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# some infos
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++1y -stdlib=libc++ -O3 -g
NAME = mindOpen

# generate objs from cpp files
SRC = src/main.cpp
SRC += src/MindOpen.cpp
SRC += src/Memory.cpp
SRC += src/While.cpp
SRC += src/CloseWhile.cpp
SRC += src/DecPointer.cpp
SRC += src/IncPointer.cpp
SRC += src/DecValue.cpp
SRC += src/IncValue.cpp
SRC += src/ReadChar.cpp
SRC += src/WriteValue.cpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

re: fclean $(NAME)

$(NAME): $(OBJS)
	@$(CC) -o $@ $(OBJS) $(FLAGS)

%.o: %.cpp
	@$(CC) -o $@ -c $< $(FLAGS)

.PHONY: clean fclean

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)
