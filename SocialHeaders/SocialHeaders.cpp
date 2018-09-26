#include "stdafx.h"

#include <iostream>
#include <string>
#include <sstream>
#include <list>

using namespace std;


#include "User.h"

#include "SignUp.h"


int main() {
	list<User> user_list = list<User>();
	//list<User> post_list();
	string choice;
	do {

		cout << "\a<-----------------------Welcome to MyFace    :)     ....Another Social Network----------------------->\n";
		cout << "<-----------------------Please chose from one of the following options\n";
		cout << "\t \t \a(a) Sign Up (b)Sign In (C) Exit ";
		cin >> choice;

		if (choice == "a")
		{

			user_list = signUp(user_list);

		}

		if (choice == "b")
		{

			Signin(user_list);
		}

	} while (choice != "c");

	{
		cout << "See you nexttime :)   ";
	}


}


