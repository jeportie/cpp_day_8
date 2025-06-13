/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 11:28:53 by jeportie          #+#    #+#             */
/*   Updated: 2025/06/13 11:33:07 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/class/Span.hpp"
#include <exception>
#include <stdexcept>

int main(void)
{
	std::cout << "Hello World!" << std::endl;

	Span sp = Span(11);

	try
	{	
		// Fill a vector with numbers
		std::vector<int> numbers;
		for (int i = 1; i <= 5; ++i)
			numbers.push_back(i * 10);

	    // Add all numbers from the vector to the Span at once
		sp.addNumbers(numbers.begin(), numbers.end());


		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(42);

		std::cout << sp << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::runtime_error& e)
	{
		std::cout << "Runtime Error! " << e.what() << std::endl;
	}
	catch (const std::logic_error& e)
	{
		std::cout << "Logic Error! " << e.what() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception Error! " << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Unknown Error!" << std::endl;
	}
	return (0);
}
