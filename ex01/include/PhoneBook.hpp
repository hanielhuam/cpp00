/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:59:46 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/07/12 23:54:03 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.h"
#define BOOK_SIZE 8

class PhoneBokk
{
	private:
		int		_size;
		Contact _book[BOOK_SIZE];

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	createContact(void);
		void	search(void);
};
