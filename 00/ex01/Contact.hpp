/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 23:25:56 by cmanuel-          #+#    #+#             */
/*   Updated: 2026/04/08 23:25:59 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#define EMPTY_FIELD "Field cannot be empty. Try again."

class Contact
{
    private:
	std::string first;
	std::string last;
	std::string nick;
	std::string phone;
	std::string secret;

    public:
	void addContact(void);
	void printContact(void);
	void printData(void);
};

#endif
