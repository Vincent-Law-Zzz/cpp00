
#include "ex01_header.hpp"

// std::string forma_text(std::string	input)
// {
// 	std::string	res;

// 	if (input.length() >= 10)
// 		for (int i = 0; i < 10; i++)
// 		{
// 			res[i] = input[i]; 
// 		}
// 	return res;
// }

void add_contact(Phonebook *contacts)
{
	std::string	input;

	wait_for_first_name_enter();
	std::getline (std::cin,input); 
	contacts->set_first_name(input);

	wait_for_last_name_enter();
	std::getline (std::cin,input); 
	contacts->set_last_name(input);

	wait_for_nickname_enter();
	std::getline (std::cin,input); 
	contacts->set_nickname(input);

	wait_for_phonenumber_enter();
	std::getline (std::cin,input); 
	contacts->set_phone_number(input);

	wait_for_secret_enter();
	std::getline (std::cin,input); 
	contacts->set_darkest_secret(input);
}

void search_contact(Phonebook contacts[8], int isFull, int j)
{
	int size = 0;
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
	std::cout << "!___________________________________________!" << std::endl;
}


int main()
{
	Phonebook	contacts[8];
	std::string	input;
	int			i = 0;
	int			isFull = 0;

	while (input != "EXIT")
	{
		wait_for_enter();
		std::getline (std::cin,input); 
		if (input == "ADD")
		{
			add_contact(&contacts[i]);
			i++;
		}
		if (input == "SEARCH")
			search_contact(contacts, isFull, i);
		if (i == 8)
		{
			i = 0;
			isFull = 1;
		}
		// std::cout << contacts[0].darkest_secret << std::endl;
	}
}