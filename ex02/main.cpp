#include <iostream>
#include <vector>

#include "MutantStack.hpp"

void	testVector()
{
	std::vector<int>	mstack;

	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << "top\t" << *(mstack.end() - 1) << std::endl;

	mstack.pop_back();

	std::cout << "size\t" << mstack.size() << std::endl;

	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(-42);
	mstack.push_back(0);

	std::vector<int>::iterator	it = mstack.begin();
	std::vector<int>::iterator	ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void	testMutantStack()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top\t" << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size\t" << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(-42);
	mstack.push(0);

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack <int>	s(mstack);
}

int	main()
{
	std::cout << "*** vector ***" << std::endl;
	testVector();

	std::cout << std::endl << "*** mutantStack ***" << std::endl;
	testMutantStack();
}
