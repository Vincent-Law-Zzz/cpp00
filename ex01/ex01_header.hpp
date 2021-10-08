
#ifndef EX01_HEADER_HPP
# define EX01_HEADER_HPP
# include <iostream>
# include <string>
# include <iomanip>

class Phonebook {
	public	:
		void set_first_name(std::string new_first_name)
		{
			first_name = new_first_name;
		}

		void set_last_name(std::string new_last_name)
		{
			last_name = new_last_name;
		}

		void set_nickname(std::string new_nickname)
		{
			nickname = new_nickname;
		}

		void set_phone_number(std::string new_phone_number)
		{
			phone_number = new_phone_number;
		}

		void set_darkest_secret(std::string new_darkest_secret)
		{
			darkest_secret = new_darkest_secret;
		}

		void echo()
		{
			std::cout << "|";
			echo_contact_fills(first_name);
			echo_contact_fills(last_name);
			echo_contact_fills(nickname);
			std::cout << std::endl;
		}
	private :
    	std::string first_name;
    	std::string last_name;
    	std::string nickname;
    	std::string phone_number;
		std::string darkest_secret;

		void echo_contact_fills(std::string str)
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
};

void	wait_for_first_name_enter();
void	wait_for_last_name_enter();
void	wait_for_nickname_enter();
void	wait_for_phonenumber_enter();
void	wait_for_secret_enter();
void	wait_for_enter();
#endif