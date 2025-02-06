#include "PhoneBook.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iomanip>
PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

int CheckInput(std::string input)
{
	int i = 0;
	while(input[i])
	{
        if (!std::isprint(input[i])) {
            std::cout << "Invalid input (Non-printable)\n";
            return 1;
        }
		i++;
	}
	if(std::cin.eof())
	{
		std::cout << "\nexit\n";
		exit(1);
		return 1;
	}
	else if(input.empty())
		return 1;
	return 0;
}

void PhoneBook::add(int index)
{
	std::string input;

	do {
		std::cout << "Enter FirstName: ";
		std::getline(std::cin, input);
	} while (CheckInput(input));
	this->contacts[index].SetFirstName(input);

	do {
		std::cout << "Enter LastName: ";
		std::getline(std::cin, input);
	} while (CheckInput(input));
	this->contacts[index].SetLastName(input);

	do {
		std::cout << "Enter  NickName: ";
		std::getline(std::cin, input);
	} while (CheckInput(input));
	this->contacts[index].SetNickName(input);

	do {
		std::cout << "Enter PhoneNumber: ";
		std::getline(std::cin, input);
	} while (CheckInput(input));
	this->contacts[index].SetPhoneNumber(input);

	do {
		std::cout << "Enter DarkestSecret: ";
		std::getline(std::cin, input);
	} while (CheckInput(input));
	this->contacts[index].SetDarkestSecret(input);
}
void PhoneBook::DisplayChosen()
{
	std::string tmp1;
	int tmp2;
	do {
		std::cout<<"enter the index that you want his\\her = ";
		std::getline(std::cin, tmp1);
		if(std::cin.eof())
		{
			std::cout << "\nexit\n";
			exit(1);
		}
		int i = 0;
		while (tmp1[i])
		{
			if(!isdigit(tmp1[i]))
			{
				std::cout<<"index between 0-7\n";
				break ;
			}
			i++;
		}
		if (i != (int)tmp1.length())
			continue;
		std::stringstream(tmp1) >> tmp2;
		if(tmp2 > 7 || tmp2 < 0)
		{
			std::cout<<"index between 0-7\n";
			continue ;
		}
		break ;
	} while (1);
	std::cout<<"FirstName = "<<this->contacts[tmp2].GetFirstName()<<std::endl;
	std::cout<<"LastName = "<<this->contacts[tmp2].GetLastName()<<std::endl;
	std::cout<<"NickName = "<<this->contacts[tmp2].GetNickName()<<std::endl;
	std::cout<<"PhoneNumber = "<<this->contacts[tmp2].GetPhoneNumber()<<std::endl;
	std::cout<<"DarkestSecret = "<<this->contacts[tmp2].GetDarkestSecret()<<std::endl;
}
void PhoneBook::search()
{
	int i = 0;
	std::string tmp;
	std::cout<<std::setw(10)<<"index"<<std::setw(10)<<"| FirstName"<<std::setw(10)<<"| LastName "<<std::setw(10)<<"| NickName "<<std::endl;
	std::cout<<"-------------------------------------------\n";
	while (i < 8)
	{
		std::cout<<std::setw(10)<<i;
		std::cout<<"|";
		tmp = this->contacts[i].GetFirstName();

		if(tmp.length() > 9)
			tmp = tmp.substr(0, 9)+".";
		std::cout<<std::setw(10)<<tmp;
		std::cout<<"|";

 		tmp = this->contacts[i].GetLastName();
		if(tmp.length() > 9)
			tmp = tmp.substr(0, 9)+".";
		std::cout<<std::setw(10)<<tmp;
		std::cout<<"|";

		tmp = this->contacts[i].GetNickName();
		if(tmp.length() > 9)
			tmp = tmp.substr(0, 9)+".";
		std::cout<<std::setw(10)<<tmp;

		std::cout<<std::endl;
		i++;
	}
	DisplayChosen();
}
