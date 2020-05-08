#pragma once
#include <iostream>
#include <string>
#include "User.h"
//Coded by: Molly Morris
using namespace std;
class Admin : public User
{
private:
	//Added since we created the diagram in milestone 5
	List <User> userList;
public:
	Admin(string account, string password);
	//Adds a user to the list
	void newUser(string account, string password);
	//Removes a user from the list
	bool removeUserid(string account, string password);
};
