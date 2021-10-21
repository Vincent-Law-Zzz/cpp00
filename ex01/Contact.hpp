#include "ex01_header.hpp"

class Contact {
	public	:
		void set_first_name(std::string new_first_name);
		void set_last_name(std::string new_last_name);
		void set_nickname(std::string new_nickname);
		void set_phone_number(std::string new_phone_number);
		void set_darkest_secret(std::string new_darkest_secret);
		void echo();
		void echo_all();
	private :
    	std::string first_name;
    	std::string last_name;
    	std::string nickname;
    	std::string phone_number;
		std::string darkest_secret;

		void echo_contact_fills(std::string str);
};