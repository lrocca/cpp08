#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>

class Span
{
	private:
		int*			_array;
		size_t			_index;
		unsigned int	_size;

		Span();

	public:
		Span(unsigned int size);
		Span(const Span& other);
		~Span();

		Span&	operator=(const Span& other);

		void			addNumber(int n);

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
