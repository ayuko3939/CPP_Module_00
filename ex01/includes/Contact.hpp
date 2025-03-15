/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:13:46 by yohasega          #+#    #+#             */
/*   Updated: 2025/01/01 19:29:32 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNum;
		std::string _secret;

	public:
		Contact();
		~Contact();
		std::string const getFirstName() const;
		std::string const getLastName() const;
		std::string const getNickName() const;
		std::string const getPhoneNum() const;
		std::string const getSecret() const;
		void setFirstName(std::string str);
		void setLastName(std::string str);
		void setNickName(std::string str);
		void setPhoneNum(std::string str);
		void setSecret(std::string str);
};

std::string removeNoPrint(std::string str);

#endif