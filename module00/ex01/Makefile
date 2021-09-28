# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/24 15:02:29 by rlinkov           #+#    #+#              #
#    Updated: 2021/09/27 20:31:25 by rlinkov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook 

CXX			=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

SRCS		=	main.cpp \
				contact.cpp \
				phonebook.cpp \

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