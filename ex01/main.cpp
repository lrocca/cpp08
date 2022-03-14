#include <iostream>

#include "Span.hpp"

int	main(void)
{
	Span x(5);

	x.addNumber(10);
	x.addNumber(11);
	x.addNumber(22);
	x.addNumber(25);
	x.addNumber(30);

	std::cout << "shortest: " << x.shortestSpan() << std::endl
		<< "longest: " << x.longestSpan() << std::endl;

	// elements size reached
	try
	{
		x.addNumber(25);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	// invalid size
	try
	{
		Span sp(0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	// no elements
	try
	{
		Span sp(3);
		sp.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
