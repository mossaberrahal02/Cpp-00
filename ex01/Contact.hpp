#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
typedef std::string str;

class Contact
{
    private:
        str firstName;
        str lastName;
        str nickName;
        str phoneNumber;
        str darkestSecret;
    public:
        Contact();
        void setFirstName(str firstName);
        void setLastName(str lastName);
        void setphoneNumber(str phoneNumber);
        void setNickName(str nickName);
        void setDarkestSecret(str darkestSecret);
        str getFirstName();
        str getNickname();
        str getDarkestSecret();
        str getLastName();
        str getPhoneNumber();
};


#endif