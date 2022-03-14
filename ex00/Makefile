CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	find
FILE	=	main.cpp
HEADERS	=	easyfind.hpp easyfind.tpp

all: $(NAME)

$(NAME): $(FILE) $(HEADERS)
	$(CXX) $(CXXFLAGS) $< -o $@

fclean:
	$(RM) $(NAME)

re: fclean all
