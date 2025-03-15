/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:15:12 by yohasega          #+#    #+#             */
/*   Updated: 2024/10/27 11:40:03 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// ===================== Constructor & Destructor =====================

PhoneBook::PhoneBook() : _index(-1)
{
}

PhoneBook::~PhoneBook()
{
}

// =============================== Utils ==============================

std::string resizeStr(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str += '.';
	}
	return (str);
}

// ========================= Member functions =========================

void PhoneBook::_printContactList(void)
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << "Index  ";
	std::cout << "|" << std::setw(10) << "First Name";
	std::cout << "|" << std::setw(10) << "Last Name";
	std::cout << "|" << std::setw(10) << "Nick Name";
	std::cout << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << resizeStr(_contactList[i].getFirstName());
		std::cout << "|" << std::setw(10) << resizeStr(_contactList[i].getLastName());
		std::cout << "|" << std::setw(10) << resizeStr(_contactList[i].getNickName());
		std::cout << "|" << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

void PhoneBook::_printContact(int index)
{
	if (_contactList[index].getFirstName() != "")
	{
		std::cout << "[ " << index << " ]" << std::endl;
		std::cout << "    First Name : " << _contactList[index].getFirstName() << std::endl;
		std::cout << "     Last Name : " << _contactList[index].getLastName() << std::endl;
		std::cout << "     Nick Name : " << _contactList[index].getNickName() << std::endl;
		std::cout << "  Phone Number : " << _contactList[index].getPhoneNum() << std::endl;
		std::cout << "Darkest Secret : " << _contactList[index].getSecret() << std::endl;
	}
	else
		std::cout << "\033[31mNo contact at the index.\033[m" << std::endl;
}

bool PhoneBook::searchContact(void)
{
	std::string input;
	int index;

	if (_index == -1)
		std::cout << "\033[31mNo contacts in PhoneBook. Please ADD a contact first.\033[m" << std::endl;
	else
	{
		_printContactList();
		while (1)
		{
			std::cout << "\033[32mWhich contact would you like to display?\033[m  -- index no.";
			if (!std::getline(std::cin, input))
				return (1);
			if (input.length() == 1 && std::isdigit(input[0]))
			{
				std::stringstream ss(input);
				ss >> index;
				if (index >= 0 && index <= 7)
					break;
			}
			std::cout << "\033[31mPlease enter number(0-7)!\033[m" << std::endl;
		}
		_printContact(index);
	}
	return (true);
}

void PhoneBook::_incrementIndex(void)
{
	_index++;
	if (_index > 7)
		_index = 0;
}

std::string PhoneBook::_getContactInfo(std::string str)
{
	std::string input;

	while (1)
	{
		std::cout << str << " : ";
		if (!std::getline(std::cin, input) || std::cin.eof())
			return ("");
		if (!input.empty())
			return (input);
		std::cout << "\033[31mEnter at least one character.\033[m" << std::endl;
	}
}

bool PhoneBook::addContact(void)
{
	std::string	input;

	_incrementIndex();
	input = _getContactInfo("First Name");
	if (input == "")
		return (false);
	_contactList[_index].setFirstName(input);
	input = _getContactInfo("Last Name");
	if (input == "")
		return (false);
	_contactList[_index].setLastName(input);
	input = _getContactInfo("Nick Name");
	if (input == "")
		return (false);
	_contactList[_index].setNickName(input);
	input = _getContactInfo("Phone Number");
	if (input == "")
		return (false);
	_contactList[_index].setPhoneNum(input);
	input = _getContactInfo("Darkest Secret");
	if (input == "")
		return (false);
	_contactList[_index].setSecret(input);
	return (true);
}
