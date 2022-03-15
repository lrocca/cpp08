#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
	private:
	public:
		MutantStack();
		MutantStack(const MutantStack<T>& other);
		virtual ~MutantStack();

		MutantStack<T>&	operator=(const MutantStack<T>& other);
};

#endif
