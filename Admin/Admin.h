#pragma once
#include <iostream>
#include <string>
#include "User.h"
//Coded by: Molly Morris
using namespace std;
class Admin : public User
{
public:
	void newUser(string account, string password);
	bool removeUserid(string account, string password);
};