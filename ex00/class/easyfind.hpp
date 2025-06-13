/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:50:46 by jeportie          #+#    #+#             */
/*   Updated: 2025/06/11 20:39:21 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <iostream>

class NotFindException : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return ("Element not found");
	}
};

template <typename T> // considering T as container 
typename T::const_iterator easyfind(T& container, int value)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw NotFindException();
	std::cout << *it << std::endl;
	return (it);
}

#endif  // ***************************************************** EASYFIND_HPP //
