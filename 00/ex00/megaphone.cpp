/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 23:24:59 by cmanuel-          #+#    #+#             */
/*   Updated: 2026/04/08 23:25:10 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define MESSAGE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int main(int ac, char **av)
{
    if (ac == 1)
	std::cout << MESSAGE;

    for (int i = 1; i < ac; i++)
    {
	for (int j = 0; av[i][j]; j++)
	    std::cout << (char)toupper(av[i][j]);
	std::cout << " ";
    }

    std::cout << std::endl;

    return 0;
}
