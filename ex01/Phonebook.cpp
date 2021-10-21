
#include "ex01_header.hpp"

void	wait_for_first_name_enter()
{
	std::cout << std::endl;
	std::cout << "*________________ Aapollo's  PhoneBook ________________*" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "|               Enter contact first name :             |" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "!________________ WAITING FOR YOUR INPUT ______________!" << std::endl;
}

void	wait_for_last_name_enter()
{
	std::cout << std::endl;
	std::cout << "*________________ Aapollo's  PhoneBook ________________*" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "|                Enter contact last name :             |" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "!________________ WAITING FOR YOUR INPUT ______________!" << std::endl;
}

void	wait_for_nickname_enter()
{
	std::cout << std::endl;
	std::cout << "*________________ Aapollo's  PhoneBook ________________*" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "|                Enter contact nickname :              |" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "!________________ WAITING FOR YOUR INPUT ______________!" << std::endl;
}

void	wait_for_phonenumber_enter()
{
	std::cout << std::endl;
	std::cout << "*________________ Aapollo's  PhoneBook ________________*" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "|              Enter contact phone number :            |" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "!________________ WAITING FOR YOUR INPUT ______________!" << std::endl;
}

void	wait_for_secret_enter()
{
	std::cout << std::endl;
	std::cout << "*________________ Aapollo's  PhoneBook ________________*" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "|            Enter contact darkest secret :            |" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "!________________ WAITING FOR YOUR INPUT ______________!" << std::endl;
}

void	wait_for_enter()
{
	std::cout << std::endl;
	std::cout << "*________________ Aapollo's  PhoneBook ________________*" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "|           Enter one of following commands :          |" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "|              ADD      SEARCH       EXIT              |" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "!________________ WAITING FOR YOUR INPUT ______________!" << std::endl;
}

void	Phonebook::add_contact(int i) 
{
	std::string	input;

	wait_for_first_name_enter();
	if (!std::getline(std::cin, input))
		exit(0); 
	contacts[i].set_first_name(input);

	wait_for_last_name_enter();
	if (!std::getline(std::cin, input))
		exit(0);  
	contacts[i].set_last_name(input);

	wait_for_nickname_enter();
	if (!std::getline(std::cin, input))
		exit(0);   
	contacts[i].set_nickname(input);

	wait_for_phonenumber_enter();
	if (!std::getline(std::cin, input))
		exit(0);   
	contacts[i].set_phone_number(input);

	wait_for_secret_enter();
	if (!std::getline(std::cin, input))
		exit(0);   
	contacts[i].set_darkest_secret(input);
}

void Phonebook::echo_by_index(int j)
{
	std::string		input;

	if (!std::getline(std::cin, input))
		exit(0);
	if (input.length() == 1 && input[0] > '0' && input[0] < '9' && atoi(&input[0]) <= j)
	{
		std::cout << "*________________ Aapollo's  PhoneBook ________________*" << std::endl;
		std::cout << "|first name| last name|  nickname|     phone|    secret|" << std::endl;
		contacts[std::stoi(input) - 1].echo_all();
		std::cout << "*______________________________________________________*" << std::endl;
	}
}

void	Phonebook::search_contact(int isFull, int j)
{
	int	size = 0;
	std::cout << std::endl;
	std::cout << "*___________ Aapollo's  PhoneBook __________*" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|" << std::endl;
	if (isFull)
		size = 8;
	else if (j == 0 && !isFull)
		std::cout << "|                 Is empty!                 |" << std::endl;
	else
		size = j;
	for (int i = 0; i < size; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << i + 1;
		contacts[i].echo();
	}
	std::cout << "!___________ ENTER CONTACT INDEX ___________!" << std::endl;
	echo_by_index((isFull) ? 8 : j);
}
