#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>

class Span
{
	private:
		std::vector<int> _numbers;
		unsigned int     _maxSize;

	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span(void);

		void addNumber(int n);
		int shortestSpan(void) const;
		int longestSpan(void) const;

		template <typename Iterator>
		void addNumber(Iterator begin, Iterator end)
		{
			while (begin != end)
			{
				addNumber(*begin);
				++begin;
			}
		}
};

#endif
