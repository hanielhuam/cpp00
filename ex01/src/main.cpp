/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:58:56 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/07/14 18:45:12 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <iomanip>

int	main(void)
{
	PhoneBook	book;
	std::string	input;

	input = "nada";
	std::cout << "Hello!! i'am your phone book" << std::endl;
	while (input.compare("EXIT") && input.compare("exit"))
	{
		std::cout << "Write what do you want:" << std::endl;
		std::cout << "ADD or SEARCH" << std::endl;
		std::getline(std::cin, input);
		if (!input.compare("ADD") || !input.compare("add"))
			book.createContact();
		if (!input.compare("SEARCH") || !input.compare("search"))
			book.search();
	}
	std::cout << "bye bye, see you later" << std::endl;
	return (0);
}
