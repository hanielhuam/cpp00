/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:58:56 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/07/11 23:12:59 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	main(void)
{
	Contact contact;

	contact = Contact("Haniel", "Huam", "Hani", "84981261614", "nenhum");
	contact.showContact();
	return (0);
}
