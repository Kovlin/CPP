# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/24 15:02:29 by rlinkov           #+#    #+#              #
#    Updated: 2021/10/18 14:42:15 by rlinkov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	mutantstack

CXX			=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

SRCS		=	main.cpp \
				

OBJS		=	${SRCS:.cpp=.o}

all			:	$(NAME)

$(NAME)		:	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean		:
	$(RM) $(OBJS)

fclean		:	clean
	$(RM) $(NAME)
	$(RM) numbers.out

re			:	fclean all

.PHONY		:	re fclean clean