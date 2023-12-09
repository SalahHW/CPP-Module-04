# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 19:44:28 by sbouheni          #+#    #+#              #
#    Updated: 2023/12/09 19:44:34 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					=	materia

CXX						=	c++
CXXFLAGS				=	-Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

SRCS					=	source/main.cpp									\
							Class/AMateria/AMateria.cpp 					\
							Class/Character/Character.cpp 					\
							Class/Cure/Cure.cpp 							\
							Class/Ice/Ice.cpp 								\
							Class/MateriaSource/MateriaSource.cpp 			\

OBJS					=	$(SRCS:.cpp=.o)

all						:	$(NAME)

$(NAME)					:	$(OBJS)
							$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean					:
							rm -rf $(OBJS)

fclean					:	clean
							rm -rf $(NAME)

re						:	fclean all

.PHONY					:	all clean fclean re
