#include "Contact.hpp"

str Contact::getFirstName()
{
    return(this->firstName);
}

str Contact::getLastName()
{
    return(this->lastName);
}

str Contact::getPhoneNumber()
{
    return(this->phoneNumber);
}

str Contact::getNickname()
{
    return(this->nickName);
}

str Contact::getDarkestSecret()
{
    return (this->darkestSecret);
}

void Contact::setDarkestSecret(str darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

void Contact::setNickName(str nickName)
{
    this->nickName = nickName;
}

void Contact::setFirstName(str firstName)
{
    this->firstName = firstName;
}

void Contact::setLastName(str lastName)
{
    this->lastName = lastName;
}

void Contact::setphoneNumber(str phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

Contact::Contact()
{
}