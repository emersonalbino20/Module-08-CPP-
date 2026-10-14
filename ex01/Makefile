# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ealbino <ealbino@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/01 21:20:43 by ealbino           #+#    #+#              #
#    Updated: 2026/09/05 15:41:30 by ealbino          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = Span.o main.o 

HEADER = Span.hpp

all: $(NAME)

$(OBJS): $(HEADER)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
