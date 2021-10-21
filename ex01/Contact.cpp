#include "ex01_header.hpp"

void Contact::set_first_name(std::string new_first_name)
{
	first_name = new_first_name;
}

void Contact::set_last_name(std::string new_last_name)
{
	last_name = new_last_name;
}

void Contact::set_nickname(std::string new_nickname)
{
	nickname = new_nickname;
}

void Contact::set_phone_number(std::string new_phone_number)
{
	phone_number = new_phone_number;
}

void Contact::set_darkest_secret(std::string new_darkest_secret)
{
	darkest_secret = new_darkest_secret;
}

void Contact::echo()
{
	std::cout << "|";
	echo_contact_fills(first_name);
	echo_contact_fills(last_name);
	echo_contact_fills(nickname);
	std::cout << std::endl;
}

void Contact::echo_all()
{
	std::cout << "|";
	echo_contact_fills(first_name);
	echo_contact_fills(last_name);
	echo_contact_fills(nickname);
	echo_contact_fills(phone_number);
	echo_contact_fills(darkest_secret);
	std::cout << std::endl;
}

void Contact::echo_contact_fills(std::string str)
{
	size_t	length;

	length = str.length();
	if (length <= 10)
	{
		std::cout << std::setw(10);
		std::cout << str;
	}
	if (length > 10)
	{
		str[9] = '.';
		std::cout << str.substr(0, 10);
	}
	std::cout << "|";
}