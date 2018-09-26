#include "stdafx.h"
#include "User.h"



User::User(string username, string password)
{
	Username = username;
	Password = password;

}

string User::get_user() {
	return Username;
}

string User::get_password() {
	return Password;
}
