#include <iostream>
#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int size): _array(nullptr), _index(0), _size(size)
{
	if (!size)
		throw InvalidSizeException();
	_array = new int[size];
}

Span::Span(const Span& other): _array(nullptr), _index(0), _size(other._size)
{
	*this = other;
}

Span::~Span()
{
	delete[] _array;
}

Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_index = other._index;
		_size = other._size;
		delete[] _array;
		_array = new int[_size];
		for (size_t i = 0; i < _index; i++)
			_array[i] = other._array[i];
	}
	return *this;
}

void	Span::addNumber(int n)
{
	if (_index == _size)
		throw NoElementsLeftException();
	_array[_index++] = n;
}

unsigned int	Span::shortestSpan() const
{
	if (_index == 0)
		throw NoElementsException();

	unsigned int span = 0;
	unsigned int tmp = 0;

	for (size_t i = 0; i < _index; i++)
		if ((tmp = abs(_array[i] - _array[i + 1])) < span)
			span = tmp;

	return span;
}

unsigned int	Span::longestSpan() const
{
	if (_index == 0)
		throw NoElementsException();

	unsigned int span = 0;
	unsigned int tmp = 0;

	for (size_t i = 0; i < _index - 1; i++)
		if ((tmp = abs(_array[i] - _array[i + 1])) > span)
			span = tmp;

	return span;
}

const char*	Span::InvalidSizeException::what() const throw()
{
	return "Size can't be zero";
}

const char*	Span::NoElementsException::what() const throw()
{
	return "No elements in Span";
}

const char*	Span::NoElementsLeftException::what() const throw()
{
	return "Elements size reached";
}
