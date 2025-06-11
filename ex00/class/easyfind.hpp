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

#include <vector>
#include <iostream>

template <typename T>
void	easyfind(T type, int i)
{
	size_t j;

	std::vector<T> nums_vector;
	nums_vector.push_back(10);
	nums_vector.push_back(42);
	j = 0;
	while (j < nums_vector.size())
	{
		std::cout << nums_vector[i] << std::endl;
		j++;
	}
	nums_vector.assign
}

#endif  // ***************************************************** EASYFIND_HPP //
