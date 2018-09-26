#pragma once



#include "User.h"
#include <list>
#include <iostream>

// This also serves as a Table of Contents for humans!!!

void mainMenu();
User* findPassworInUser(list <User> *user_list, string username);
void Signin(list<User> user_list);
list<User> signUp(list<User> user_list);

