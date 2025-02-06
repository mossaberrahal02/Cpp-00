#pragma once
#include "Contact.hpp"
class PhoneBook
{

	private:
		Contact contacts[8];
		static int current_contact;
	public:
		PhoneBook(void);
		~PhoneBook(void);


		void add(int index);
		void search();
		void DisplayChosen();

};
