#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "instance.hpp"
#include <iostream>
typedef std::string str;

class Phonebook
{
    private:
        int max_contacts;
        int current;
        Contact contacts[8];
    public:
        Phonebook();
        void add();
        void search();
        void display();
};

#endif