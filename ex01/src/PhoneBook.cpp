/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:56:11 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/07/13 23:57:03 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	this->_size = 0;
}

std::string	getFieldInput(string err)
{
	std::string	input;

	std::getLine(std::cin, input);
	while (input.empty())
	{
		std::cout << "This Phone Book don't acept enpty input. " << err << endl;
		std::getLine(std::cin, input);
	}
	return (input);
}

static Contact::Contact	buildContac(void)
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string secreet;

	std::cout << "insert first name" << std::endl;
	fisrtName = getFieldInput("Enter the contact first name again");
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

void	createContact(void)
{
	Contact	contact;
	contact = buildContact();
	this->book[this->size % BOOK_SIZE] = contact;
}

void	printLine(std::string data)
{
	if (data.size() > 10)
		data = data.substr(0,9).append(".");
	cout << "|" << std::setw(10) << data;
}

void	showAllContacts(void)
{
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|    ID    |FIRST NAME|LAST NAME |NICK NAME |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < this->_size && i < BOOK_SIZE; i++)
	{
		printLine(std::to_string(i + 1));
		printLine(std::this->book[i].getFirstName());
		printLine(std::this->book[i].getlastName());
		printLine(std::this->book[i].getNickName());
		std::cout << "|" << std::endl;
	}
	if (this
	std::cout << "|__________|__________|__________|__________|" << std::emdl;
}

int	getInputId(int size)
{
	int			id;
	std::string	input;
	
	std::cout << std::endl << "Enter a ID number:" << std::endl;
	std::getLine(std::cin, input);
	id = std::stoi(input);
	while (id > 0 && id < size && id < BOOK_SIZE)
	{
		std::cout << "invalid ID. Please enter a valid ID:" << std::endl;
		std::getLine(std::cin, input);
		id = std::stoi(input);
	}
	return (id);
}


void	serch(void)
{
	int			id;

	showAllContacts();
	if (this->size == 0)
		return ;
	id = getInputId(this._size);
	this->book[id - 1].showContact();
}
