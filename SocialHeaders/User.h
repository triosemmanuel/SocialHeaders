#pragma once

#include <string>
using namespace std;


// This also serves as a Table of Contents for humans!!!

class User {
public:
	string Username;
	string Password;

	User(string username, string password);
	string get_user();
	string get_password();
};

