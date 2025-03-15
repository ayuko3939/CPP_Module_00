/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:15:29 by yohasega          #+#    #+#             */
/*   Updated: 2024/10/27 11:40:04 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phoneBook;
	std::string input;

	std::cout << "+---+---+---+---+---+---+---+---+---+---+---+---+---+---+" << std::endl;
	std::cout << "|             Welcome to the 80s PhoneBook!             |" << std::endl;
	std::cout << "+---+---+---+---+---+---+---+---+---+---+---+---+---+---+" << std::endl
			  << std::endl;
	while (1)
	{
		std::cout << "\033[32mWhat would you like to do? (ADD / SEARCH / EXIT) : \033[m";
		if (!std::getline(std::cin, input) || std::cin.eof())
			break;
		if (input == "ADD")
		{
			if (!phoneBook.addContact())
				break;
		}
		else if (input == "SEARCH")
		{
			if (!phoneBook.searchContact())
				break;
		}
		else if (input == "EXIT")
			break;
		else
			std::cout << "\033[31mEnter one of these(ADD / SEARCH / EXIT)\033[m" << std::endl;
	}
	std::cout << std::endl
			  << "Thank you for using PhoneBook! See you again!" << std::endl;
	return (0);
}
