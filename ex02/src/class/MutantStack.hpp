/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:34:35 by jeportie          #+#    #+#             */
/*   Updated: 2025/06/13 14:52:46 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack(void) {}
    MutantStack(const MutantStack& src) : std::stack<T>(src) {}
    ~MutantStack(void) {}

    MutantStack& operator=(const MutantStack& rhs)
    {
        if (this != &rhs)
            std::stack<T>::operator=(rhs);
        return (*this);
    }

    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin(void) { return (this->c.begin()); }
    iterator end(void) { return (this->c.end()); }
};

#endif  // ************************************************** MUTANTSTACK_HPP //
