/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 23:26:41 by cmanuel-          #+#    #+#             */
/*   Updated: 2026/04/08 23:26:45 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{ 
    PhoneBook pb;

    while (true)
    {
	std::cout << ">$";
	std::string cmd;

	getline(std::cin, cmd);

	if (cmd == "ADD")
	    pb.addContact();

	else if (cmd == "SEARCH")
	{
	    if (pb.isEmpty())
		std::cout << ERROR_EMPTY << std::endl;
	    else
	    {
		pb.printAll();
		int x = pb.searchPrompt();
	        if (x == -1)
		    std::cout << ERROR_INDEX << std::endl;
		else
		    pb.searchIndex(x);
	    }
	}
	else if (cmd == "EXIT")
	    break;
    }
    return 0;
}

