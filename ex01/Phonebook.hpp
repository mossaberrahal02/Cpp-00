#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "instance.hpp"
typedef std::string str;

class Phonebook
{
    private:
        int totalNbrOfContacts;
        int current;
        Contact contacts[3];
    public:
        Phonebook();
        void add();
        void search();
        int checkInput(str input);
        str checker(str input, str field);
        void display();
};

#endif