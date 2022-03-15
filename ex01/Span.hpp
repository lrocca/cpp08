#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <exception>
# include <vector>

class Span
{
	private:
		std::vector<int>	_numbers;
		unsigned int		_size;

		Span();

	public:
		Span(unsigned int size);
		Span(const Span& other);
		~Span();

		Span&	operator=(const Span& other);

		void			addNumber(int n);
		void			addNumber(std::vector<int>::const_iterator &it1, std::vector<int>::const_iterator &it2);

		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;

		class InvalidSizeException: public std::exception
		{
			virtual const char*	what() const throw();
		};
		class NoElementsException: public std::exception
		{
			virtual const char*	what() const throw();
		};
		class NoElementsLeftException: public std::exception
		{
			virtual const char*	what() const throw();
		};
};

#endif
