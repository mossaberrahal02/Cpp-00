#include<iostream> 

#define max_contacts 8

// class Phonebook
// {
//     private:
//         int i;
//     public:
//         Phonebook(int i);
//         ~Phonebook();
// };

// Phonebook::Phonebook(int i)
// {
//     this->i = i;
// }

// Phonebook::~Phonebook()
// {
// }
class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string phone_nbr;
    public:
        Contact();
        Contact(std::string first_name, std::string last_name, std::string phone_nbr);
        void testtt()
        {
            std::cout<<"first name "<<this->first_name<<std::endl;
        }
        void set_name(std::string name)
        {
            this->first_name = name;
        }
};

Contact::Contact()
{
}
Contact::Contact(std::string, std::string, std::string)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->phone_nbr = phone_nbr;
}



int main()
{
    Contact test;
    Contact test2 = new Contact("mossab", "errahal", "0611111111");
    test.set_name("mossab");
    test.testtt();
    test.set_name("wah mossab");
    test.testtt();

    test2.testtt();
    std::cout<<"the end";
}