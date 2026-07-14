/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:59:46 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/07/13 23:57:09 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.h"
#include <string>

# define BOOK_SIZE 8

class PhoneBokk
{
	private:
		int		_size;
		Contact _book[BOOK_SIZE];
		void	showAllContacts(void);

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	createContact(void);
		void	search(void);
};
