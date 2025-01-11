#include "Phonebook.hpp"

int Phonebook::checkInput(str input)
{
    if(input == "\0")
        return 0;
    return 1;
}

str Phonebook::checker(str input, str field)
{
    if(input == "\0")
        return NULL;
    while (!this->checkInput(input))
    {
        std::cout<<"required  ==> enter the "<<field<<" = ";
        std::getline(std::cin, input);
    }
    return input;
}

void Phonebook::add()
{
    str firstName;
    str lastName;
    str phoneNumber;
    str nickName;
    str darkestSecret;
    if(this->totalNbrOfContacts > 8)
    {
        std::cout<<"the max is 8 contacts"<<std::endl;
        return;
    }
    std::cout<<"enter the first name = ";
    std::getline(std::cin, firstName);
    firstName = this->checker(firstName, "first name");
    std::cout<<"enter the last name = ";
    std::getline(std::cin, lastName);
    lastName = this->checker(lastName, "lastName");
    std::cout<<"enter the phoneNumber = ";
    std::getline(std::cin, phoneNumber);
    phoneNumber = this->checker(phoneNumber, "phoneNumber");
    std::cout<<"enter the nickName = ";
    std::getline(std::cin, nickName);
    nickName = this->checker(nickName, "nickName");
    std::cout<<"enter the darkestSecret = ";
    std::getline(std::cin, darkestSecret);
    darkestSecret = this->checker(darkestSecret, "darkestSecret");
    this->contacts[this->current].setFirstName(firstName);
    this->contacts[this->current].setLastName(lastName);
    this->contacts[this->current].setphoneNumber(phoneNumber);
    this->contacts[this->current].setDarkestSecret(darkestSecret);
    this->contacts[this->current].setNickName(nickName);
    this->current++;
    this->totalNbrOfContacts++;
    if(this->current == 8)
        this->current = 0;
    std::cout<<"current "<<this->current<<"  totalNbrOfContacts = "<<this->totalNbrOfContacts<<std::endl;
}

void Phonebook::search()
{
    int i = 0;
    std::cout<<
    std::setw(10)<<"index"<<"|"<<
    std::setw(10)<<"first name"<<"|"<<
    std::setw(10)<<"laast name"<<"|"<<
    std::setw(10)<<"nickname"<<"|"<<
    std::endl;
    str firstName;
    str LastName;
    str nickName;
    while (i < this->totalNbrOfContacts)
    {
        firstName = this->contacts[i].getFirstName();
        LastName = this->contacts[i].getLastName();
        nickName = this->contacts[i].getNickname();
        if(firstName.length() > 10)
            firstName = firstName.substr(0, 9) + ".";
        if(LastName.length() > 10)
            LastName = LastName.substr(0, 9) + ".";
        if(nickName.length() > 10)
            nickName = nickName.substr(0, 9) + ".";
        std::cout<<std::setw(10)<<i<<"|"<<
        std::setw(10)<<firstName<<"|";
        std::cout<<std::setw(10)<<LastName<<"|";
        std::cout<<std::setw(10)<<nickName<<"|";
        i++;
        std::cout<<std::endl;
    }

}

void Phonebook::display()
{
    int i = 0;
    while (i < 3)
    {
        std::cout<<"name {"<<contacts[i].getFirstName()<<"}"<<std::endl;
        i++;
    }
    
}

Phonebook::Phonebook()
{
    this->current = 0;
    this->totalNbrOfContacts = 0;
}
