#include <iostream>
#include <string>

int main(int argc, char **argv) 
{
	int			size;
	int			i;
	std::string	str;
	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[i])
		str += argv[i++];
	
	size = str.size();
	for (int i = 0; i <= size; i++)
		str[i] = std::toupper(str[i]);
	std::cout << str << std::endl;
    return (0);
}