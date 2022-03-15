CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	stack
FILE	=	main.cpp
HEADERS	=	MutantStack.hpp MutantStack.tpp

all: $(NAME)

$(NAME): $(FILE) $(HEADERS)
	$(CXX) $(CXXFLAGS) $< -o $@

fclean:
	$(RM) $(NAME)

re: fclean all
