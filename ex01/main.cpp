
#include "ex01_header.hpp"

int		main(void)
{
	Phonebook	book;
	std::string	input;
	int			i = 0;
	int			isFull = 0;

	while (input != "EXIT")
	{
		wait_for_enter();
		if (!std::getline(std::cin, input))
			exit(0);   
		if (input == "ADD")
		{
			book.add_contact(i);
			i++;
		}
		if (input == "SEARCH")
			book.search_contact(isFull, i);
		if (i == 8)
		{
			i = 0;
			isFull = 1;
		}
	}
}