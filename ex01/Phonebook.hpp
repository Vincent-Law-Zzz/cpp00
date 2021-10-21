#include "ex01_header.hpp"


class Phonebook {
	public	:
		void	add_contact(int i);
		void	search_contact(int isFull, int j);
		void	echo_by_index(int j);
		Contact contacts[8];
};