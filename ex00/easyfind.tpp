#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include "easyfind.hpp"

template <typename T>
typename T::const_iterator	easyfind(const T& container, const int& target)
{
	typename T::const_iterator it = std::find(container.begin(), container.end(), target);

	if (it == container.end())
		throw NotFoundException();

	return it;
}

const char*	NotFoundException::what() const throw()
{
	return "Element not found in container";
}

#endif
