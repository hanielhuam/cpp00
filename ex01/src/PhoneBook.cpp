/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:56:11 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/07/12 23:53:58 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	this->_size = 0;
}

PhoneBook::PhoneBook(void){}

static Contact::Contact	buildContac(void)
{
	Contact		contact;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string secreet;

	std::cout << "insert first name" << std::endl;
	std::cout << "insert last name" << std::endl;
	std::cout << "insert nick name" << std::endl;
	std::cout << "insert phone number" << std::endl;
	std::cout << "insert secreet" << std::endl;
}

void	createContact(void)
{
}
