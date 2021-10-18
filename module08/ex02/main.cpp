/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:10:15 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/18 15:15:04 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>

int main()
{
	std::cout << "=========== TEST FROM THE SUBJECT ==========" << std::endl;
	std::cout << "=========== TEST WITH MSTACK<INT> ==========" << std::endl;
	{	
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	
	std::cout << "=========== TEST WITH LIST<INT> ==========" << std::endl;
	{
		std::list<int> lst;
		lst.push_back(5);
		lst.push_back(17);
		std::cout << lst.back() << std::endl;
		lst.remove(lst.back());
		std::cout << lst.size() << std::endl;
		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(737);
		lst.push_back(0);
		std::list<int>::iterator it = lst.begin();
		std::list<int>::iterator ite = lst.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::list<int> s(lst);
	}
	std::cout << "=========== TEST WITH MSTACK<CHAR> ==========" << std::endl;
	{
		MutantStack<char> mstack;
		MutantStack<char>::iterator it;

		std::cout << "Push: a" << std::endl;
		mstack.push('a');
		std::cout << "Push: b" << std::endl;
		mstack.push('b');
		std::cout << "Push: c" << std::endl;
		mstack.push('c');
		std::cout << "Push: d" << std::endl;
		mstack.push('d');

		std::cout << "Size: " << mstack.size() << std::endl;
		std::cout << "Stack: ";
		for (it = mstack.begin(); it != mstack.end(); it++)
				std::cout << *it << " ";
		std::cout << std::endl;

		while (!mstack.empty())
		{
				std::cout << "Pop: " << mstack.top() << std::endl;
				mstack.pop();
		}
		std::cout << "Size: " << mstack.size() << std::endl;
	}
	std::cout << "=========== TEST WITH LIST<CHAR> ==========" << std::endl;
	{
		std::list<char> lst;
		std::list<char>::iterator it;

		std::cout << "Push: a" << std::endl;
		lst.push_back('a');
		std::cout << "Push: b" << std::endl;
		lst.push_back('b');
		std::cout << "Push: c" << std::endl;
		lst.push_back('c');
		std::cout << "Push: d" << std::endl;
		lst.push_back('d');

		std::cout << "Size: " << lst.size() << std::endl;
		std::cout << "Stack: ";
		for (it = lst.begin(); it != lst.end(); it++)
				std::cout << *it << " ";
		std::cout << std::endl;

		while (!lst.empty())
		{
				std::cout << "Pop: " << lst.back() << std::endl;
				lst.remove(lst.back());
				std::cout << "Pop: " << lst.back() << std::endl;
				lst.remove(lst.back());
		}
		std::cout << "Size: " << lst.size() << std::endl;
	}
}