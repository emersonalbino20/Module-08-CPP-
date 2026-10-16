/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbino <ealbino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 10:36:34 by ealbino           #+#    #+#             */
/*   Updated: 2026/10/16 10:37:11 by ealbino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>


Span::Span() {}

Span::Span(unsigned int n) : _maxSize(n) {}

Span::Span(const Span& other)
    : _numbers(other._numbers), _maxSize(other._maxSize) {}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_numbers = other._numbers;
		_maxSize = other._maxSize;
	}
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int n)
{
	if (_numbers.size() >= _maxSize)
		throw std::runtime_error("Span is full");
	_numbers.push_back(n);
}

int Span::shortestSpan() const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers for span");

	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	
	int minSpan = sorted[1] - sorted[0];
	for (size_t i = 2; i < sorted.size(); i++)
	{
		int span = sorted[i] - sorted[i - 1];
		if (span < minSpan)
			minSpan = span;
	}
	return (minSpan);
}

int	Span::longestSpan() const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers for span");
	
	int min = *std::min_element(_numbers.begin(), _numbers.end());
	int max = *std::max_element(_numbers.begin(), _numbers.end());
	return (max - min);
}
