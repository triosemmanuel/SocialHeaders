#include "stdafx.h"


#include "SignUp.h"

using namespace std;


list<User> signUp(list<User> user_list)
{
	string username;
	string password;
	bool usernameInUse;
	cout << "<-----------------------Sign Up-------------->\n";
	cout << "Please enter a Username....\n";
	cin >> username;


	usernameInUse = findPassworInUser(&user_list, username);

	if (usernameInUse == true)
	{
		cout << "Username in use, please choose another....    :(     \n";

	}
	else {
		cout << "Username ok....Please enter a password......   :)        \n";
		cin >> password;
		User user = User(username, password);
		user_list.push_front(user);
		cout << "You are now signed up for MyFace....  :)     \n";
		return user_list;

	}  return user_list;
}


void Signin(list<User> user_list) {
	string username;
	string password;
	bool usernameInUse;
	cout << "<-----------------------Sign In-------------->\n";
	cout << "Please enter a Username....\n";
	cin >> username;
	User* passwordWasValid;

	usernameInUse = findPassworInUser(&user_list, username);


	if (usernameInUse == true)
	{
		cout << "Username found, please enter your password......\n";
		cin >> password;
		passwordWasValid = findPassworInUser(&user_list, username);
		if (passwordWasValid->get_password() == password)
		{
			cout << "Password ok! You are now signed into MyFace  :)  \n";
			mainMenu();

		}
		else
		{
			cout << "Password not found, please try again.......   :(      \n";
			//passwordWasValid = checkPassword(user_list, password);
		}
	}

}


User* findPassworInUser(list <User> *user_list, string username)
{

	list <User> ::iterator it;
	for (it = (*user_list).begin(); it != (*user_list).end(); it++) {
		if ((*it).get_user() == username) {
			//it was found!
			return &(*it);

		}


	}
	return NULL;
}

void mainMenu() {

	cout << "<-------------------My Face Social Network :)  :)  :)  ------------>\n";
	cout << "<Please chose from one of the following options.....\n";
	string choice;
	do {

		if (choice == "a")
		{



		}

		if (choice == "b")
		{


		}

	} while (choice != "c");

	{
		cout << "See you nexttime :)   ";
	}
}


