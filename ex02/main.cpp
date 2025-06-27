/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:32:40 by jeportie          #+#    #+#             */
/*   Updated: 2025/06/13 14:55:21 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/class/MutantStack.hpp"
#include <iostream>
#include <list>

void testMutantStack() {
	std::cout << "===== MutantStack Test =====" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "Size after pop: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "Iterating MutantStack:" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "Testing std::stack compatibility:" << std::endl;
	std::stack<int> s(mstack);
	std::cout << "Copied stack top: " << s.top() << std::endl;
}

void testListComparison() {
	std::cout << "\n===== std::list Comparison =====" << std::endl;
	std::list<int> list;

	list.push_back(5);
	list.push_back(17);
	std::cout << "Back: " << list.back() << std::endl;

	list.pop_back();
	std::cout << "Size after pop_back: " << list.size() << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	std::cout << "Iterating std::list:" << std::endl;
	std::list<int>::iterator it = list.begin();
	std::list<int>::iterator ite = list.end();
	for (; it != ite; ++it)
		std::cout << *it << std::endl;
}

int main() {
	testMutantStack();
	testListComparison();
	return 0;
}

