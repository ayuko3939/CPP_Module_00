/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:15:42 by yohasega          #+#    #+#             */
/*   Updated: 2025/01/01 19:29:39 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include <sstream>

class PhoneBook
{
	private:
		int _index;
		Contact _contactList[8];
		void _printContactList(void);
		void _printContact(int index);
		void _incrementIndex(void);
		std::string _getContactInfo(std::string str);

	public:
		PhoneBook();
		~PhoneBook();
		bool addContact(void);
		bool searchContact(void);
};

#endif