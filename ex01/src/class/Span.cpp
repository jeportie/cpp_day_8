/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 09:14:33 by jeportie          #+#    #+#             */
/*   Updated: 2025/06/13 11:32:52 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include "Span.hpp"

Span::Span(unsigned int N)
{
	std::cout << "[Span] - default constructor called - " << std::endl;
	_SpanVector.reserve(N);
	_max = N;
}

Span::Span(const Span& src)
{
	std::cout << "[Span] - copy constructor called - " << std::endl;
	*this = src;
	return;
}

Span::~Span(void)
{
	std::cout << "[Span] - destructor called - " << std::endl;
	return;
}

Span & Span::operator=(const Span& rhs)
{
	std::cout << "[Span] - copy assignment operator called - " << std::endl;
	if (this != &rhs)
		this->_max = rhs.getMax();
	return (*this);
}

std::ostream & operator<<(std::ostream & out, const Span& in)
{
	out << "Container : " << in.getMax() << std::endl; 
	in.printContainer(out);
	std::cout << std::endl;
	return (out);
}

void Span::addNumber(int n)
{
	if (_SpanVector.size() >= _max)
		throw std::out_of_range("Error: Cannot add more numbers: Span is full!");
	_SpanVector.push_back(n);
}

int Span::shortestSpan(void)
{
	std::vector<int>	tmp(_SpanVector);
	int					minSpan;
	size_t				i;

	if (_SpanVector.size() < 2)
		throw std::logic_error("Error: Not enough numbers to find a Span!");

	// 1 - Sort the list so each Span is next to each other
	std::sort(tmp.begin(), tmp.end());
	// 2 - Check first Span 
	minSpan = tmp[1] - tmp[0];
	i = 1;
	while (i < tmp.size() - 1)
	{
		// store in min Span the smallest Span (compare the new Span with the actual)
		minSpan = std::min(minSpan, tmp[i + 1] - tmp[i]);
		++i;
	}
	return (minSpan);
}

int Span::longestSpan(void)
{
	int max;
	int min;

	if (_SpanVector.size() < 2)
		throw std::logic_error("Error: Not enough numbers to find a Span!");
	max = *std::max_element(_SpanVector.begin(), _SpanVector.end());
	min = *std::min_element(_SpanVector.begin(), _SpanVector.end());

	return (max - min);
}

int  Span::getMax(void) const { return (_max); }

void Span::printContainer(std::ostream& out) const
{
	std::vector<int>::const_iterator	it;

	it = _SpanVector.begin();
	while (it != _SpanVector.end())
	{
		out << *it << "\t";
		++it;
	}
}
