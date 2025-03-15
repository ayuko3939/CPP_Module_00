/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:14:10 by yohasega          #+#    #+#             */
/*   Updated: 2025/01/01 19:29:49 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// ===================== Constructor & Destructor =====================

Contact::Contact() : _firstName(""), _lastName(""), _nickName(""), _phoneNum(""), _secret("")
{
}

Contact::~Contact()
{
}

// =============================== Getter ===============================

std::string const Contact::getFirstName() const
{
	return (_firstName);
}

std::string const Contact::getLastName() const
{
	return (_lastName);
}

std::string const Contact::getNickName() const
{
	return (_nickName);
}

std::string const Contact::getPhoneNum() const
{
	return (_phoneNum);
}

std::string const Contact::getSecret() const
{
	return (_secret);
}

// =============================== Setter ===============================

void Contact::setFirstName(std::string str)
{
	_firstName = removeNoPrint(str);
}
void Contact::setLastName(std::string str)
{
	_lastName = removeNoPrint(str);
}

void Contact::setNickName(std::string str)
{
	_nickName = removeNoPrint(str);
}

void Contact::setPhoneNum(std::string str)
{
	_phoneNum = removeNoPrint(str);
}

void Contact::setSecret(std::string str)
{
	_secret = removeNoPrint(str);
}

// =============================== Function ===============================

std::string removeNoPrint(std::string str)
{
	std::string result;
	
	for (std::string::iterator it = str.begin(); it != str.end(); ++it)
	{
		if (isprint(static_cast<unsigned char>(*it)))
			result += *it;
	}
	return (result);
}
