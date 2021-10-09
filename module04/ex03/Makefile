# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/24 15:02:29 by rlinkov           #+#    #+#              #
#    Updated: 2021/10/09 17:25:55 by rlinkov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	materia

CXX			=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

SRCS		=	main.cpp \
				AMateria.cpp \
				ICharacter.cpp \
				IceMateria.cpp \
				CureMateria.cpp \
				Character.cpp \
				IMateriaSource.cpp \
				MateriaSource.cpp \
				

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