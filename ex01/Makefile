# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 12:03:30 by sbouheni          #+#    #+#              #
#    Updated: 2023/12/08 17:31:46 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					=	animal

CXX						=	c++
CXXFLAGS				=	-Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

SRCS					=	source/main.cpp									\
							include/Class/Animal/Animal.cpp					\
							include/Class/Cat/Cat.cpp						\
							include/Class/Dog/Dog.cpp						\
							include/Class/WrongAnimal/WrongAnimal.cpp		\
							include/Class/WrongCat/WrongCat.cpp				\
							include/Class/Brain/Brain.cpp					\

HDRS					=	include/Class/Animal/Animal.hpp					\
							include/Class/Cat/Cat.hpp						\
							include/Class/Dog/Dog.hpp						\
							include/Class/WrongAnimal/WrongAnimal.hpp		\
							include/Class/WrongCat/WrongCat.hpp				\
							include/Class/Brain/Brain.hpp					\

OBJS					=	$(SRCS:.cpp=.o)

all						:	$(NAME)

$(NAME)					:	$(OBJS)	$(HDRS)
							$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean					:
							rm -rf $(OBJS)

fclean					:	clean
							rm -rf $(NAME)

re						:	fclean all

.PHONY					:	all clean fclean re
