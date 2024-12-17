#include "Phonebook.hpp"

void Phonebook::add()
{
    str firstName;
    str lastName;
    str phoneNumber;
    str nickName;
    str darkestSecret;
    std::cout<<"enter the first name = ";
    std::getline(std::cin, firstName);
    // std::cout<<std::endl<<"enter the last name = ";
    // std::getline(std::cin, lastName);
    // std::cout<<std::endl<<"enter the phoneNumber = ";
    // std::getline(std::cin, phoneNumber);
    // std::cout<<std::endl<<"enter the nickName = ";
    // std::getline(std::cin, nickName);
    // std::cout<<std::endl<<"enter the darkestSecret = ";
    // std::getline(std::cin, darkestSecret);
    this->contacts[this->current].setFirstName(firstName);
    // this->contacts[this->current].setLastName(lastName);
    // this->contacts[this->current].setphoneNumber(phoneNumber);
    // this->contacts[this->current].setDarkestSecret(darkestSecret);
    // this->contacts[this->current].setNickName(nickName);
    this->current++;
    if(current == 8)
        current = 0;
    std::cout<<"current "<<current<<std::endl;
}

void Phonebook::search()
{

}

void Phonebook::display()
{
    int i = 0;
    while (i < 8)
    {
        std::cout<<"name "<<contacts[i].getFirstName()<<std::endl;
        i++;
    }
    
}

Phonebook::Phonebook() : current(0)
{
}