#include "instance.hpp"

int main()
{
    Phonebook phonebook;
    str input;

    while (1)
    {
		std::cout << "Type ADD, SEARCH or EXIT : ";
		std::getline(std::cin, input);
        if (input == "ADD")
            phonebook.add();
        else if (input == "SEARCH")
            phonebook.search();
        else if (input == "display")
            phonebook.display();
        if (input == "EXIT")
            break;
    }
}