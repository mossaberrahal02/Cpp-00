#include "PhoneBook.hpp"
#include <string>
#include <stdlib.h>
#include <iostream>


int main()
{
	int i = 0;
	PhoneBook instance;
	std::string input;
	while(1)
	{
		std::cout << "chose between ADD SEARCH EXIT: ";
		std::getline(std::cin, input);
		if(std::cin.eof())
		{
			std::cout << "\nexit\n";
			return 1;
		}
		if(input == "ADD")
		{
			instance.add(i);
			i = (i + 1) % 8;
		}
		else if(input == "SEARCH")
			instance.search();
		else if(input == "EXIT")
			break;
	}
}
