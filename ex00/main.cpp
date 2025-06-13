/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:50:39 by jeportie          #+#    #+#             */
/*   Updated: 2025/06/11 20:04:56 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/easyfind.hpp"
#include <exception>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int>                 nums_vector;
    std::vector<int>::const_iterator it;

    nums_vector.push_back(10);
    nums_vector.push_back(42);
    nums_vector.push_back(120);
    nums_vector.push_back(999);
    nums_vector.push_back(1024);

    try
    {
		it = easyfind(nums_vector, 42);
		std::cout << "found :" << *it << std::endl;
		easyfind(nums_vector, 1);
		std::cout << "found :" << *it << std::endl;
    }
    catch (const std::exception& e)
    {
		std::cout << e.what() << std::endl;
    }

    return (0);
}
