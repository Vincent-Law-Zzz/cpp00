#include <iostream>
#include <string>

int main(int argc, char **argv) 
{
	int			size;

	if (argc != 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	std::string	str(argv[1]);
	
	size = str.size();
	for (int i = 0; i <= size; i++)
		str[i] = std::toupper(str[i]);
	std::cout << str << std::endl;
    return 0;
}