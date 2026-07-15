/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:56:11 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/07/14 19:51:36 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook(void)
{
	this->_size = 0;
}

PhoneBook::~PhoneBook(void){}

std::string	getFieldInput(std::string err)
{
	std::string	input;

	std::getline(std::cin, input);
	while (input.empty())
	{
		std::cout << "This Phone Book don't acept enpty input. " << err << std::endl;
		std::getline(std::cin, input);
	}
	return (input);
}

static Contact	buildContact(void)
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string secreet;

	std::cout << "insert first name" << std::endl;
	firstName = getFieldInput("Enter the contact first name again");
	std::cout << "insert last name" << std::endl;
	lastName = getFieldInput("Enter the contact last name again");
	std::cout << "insert nick name" << std::endl;
	nickName = getFieldInput("Enter the contact nick name again");
	std::cout << "insert phone number" << std::endl;
	phoneNumber = getFieldInput("Enter the contact phone number again");
	std::cout << "insert secreet" << std::endl;
	secreet = getFieldInput("Enter the contact secreet again");
	return (Contact(firstName, lastName, nickName, phoneNumber, secreet));
}

void	PhoneBook::createContact(void)
{
	Contact	contact;
	contact = buildContact();
	this->_book[this->_size % BOOK_SIZE] = contact;
	this->_size++;
}

void	printLine(std::string data)
{
	if (data.size() > 10)
		data = data.substr(0,9).append(".");
	std::cout << "|" << std::setw(10) << data;
}

void	PhoneBook::showAllContacts(void)
{
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|    ID    |FIRST NAME|LAST NAME |NICK NAME |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < this->_size && i < BOOK_SIZE; i++)
	{
		std::cout << "|         " << i + 1;
		printLine(this->_book[i].getFirstName());
		printLine(this->_book[i].getLastName());
		printLine(this->_book[i].getNickName());
		std::cout << "|" << std::endl;
	}
	if (this->_size >  0)
		std::cout << "|__________|__________|__________|__________|" << std::endl;
}

int	getInputId(int size)
{
	int			id;
	std::string	input;
	
	std::cout << std::endl << "Enter a ID number:" << std::endl;
	std::getline(std::cin, input);
	id = atoi(input.c_str());
	while (id < 1 || id > size || id > BOOK_SIZE)
	{
		std::cout << "invalid ID. Please enter a valid ID:" << std::endl;
		std::getline(std::cin, input);
		id = std::atoi(input.c_str());
	}
	return (id);
}


void	PhoneBook::search(void)
{
	int			id;

	showAllContacts();
	if (this->_size == 0)
		return ;
	id = getInputId(this->_size);
	this->_book[id - 1].showContact();
}
