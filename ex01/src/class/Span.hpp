/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 09:01:24 by jeportie          #+#    #+#             */
/*   Updated: 2025/06/13 11:32:47 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
#define Span_HPP

#include <iostream>
#include <vector>

class Span
{
public:
    Span(unsigned int N);
    Span(const Span& src);
    Span& operator=(const Span& rhs);
    ~Span(void);

    void addNumber(int n);
    // Add multiple values in container at once using a range of iterator from another container
    template<typename InputIterator>
    void addNumbers(InputIterator begin, InputIterator end)
    {
        while (begin != end)
        {
            if (_SpanVector.size() >= _max)
                throw std::out_of_range("Error: Cannot add more numbers: Span is full!");
            this->addNumber(*begin);
            ++begin;
        }
    }

    int shortestSpan(void);
    int longestSpan(void);

    int  getMax(void) const;
    void printContainer(std::ostream& out) const;

private:
    unsigned int     _max;
    std::vector<int> _SpanVector;
};

// Overload operator << for output streaming
std::ostream& operator<<(std::ostream& out, const Span& in);

#endif  // ********************************************************* Span_HPP //
