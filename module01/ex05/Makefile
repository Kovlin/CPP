# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/24 15:02:29 by rlinkov           #+#    #+#              #
#    Updated: 2021/09/29 20:53:51 by rlinkov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Karen_2.0

CXX			=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

SRCS		=	main.cpp \
				Karen.cpp \

OBJS		=	${SRCS:.cpp=.o}

all			:	$(NAME)

$(NAME)		:	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean		:
	$(RM) $(OBJS)

fclean		:	clean
	$(RM) $(NAME)

re			:	fclean all

.PHONY		:	re fclean clean