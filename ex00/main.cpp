#include <iostream>
#include <vector>

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	vect(4,100);
	vect[3] = 101;

	try
	{
		std::cout << easyfind(vect, 101).base() << std::endl;
		std::cout << easyfind(vect, 90).base() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
