#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>
# include <iterator>

template <typename T>
typename T::const_iterator	easyfind(const T& container, const int& target);

class NotFoundException: public std::exception
{
	public:
		const char* what() const throw();
};

# include "easyfind.tpp"

#endif
