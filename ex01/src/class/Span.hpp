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
#include <sys/types.h>
#include <vector>

class Span
{
public:
    Span(unsigned int N);
    Span(const Span& src);
    ~Span(void);

    Span&				operator=(const Span& rhs);

    void				addNumber(int n);
    int					shortestSpan(void);
    int					longestSpan(void);

	int					getMax(void) const;
	void				printContainer(std::ostream& out) const;

private:
    unsigned int		_max;
	std::vector<int>	_SpanVector;
};

// Overload operator << for output streaming
std::ostream&			operator<<(std::ostream& out, const Span& in);

#endif  // ********************************************************* Span_HPP //
