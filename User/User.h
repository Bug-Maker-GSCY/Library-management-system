#pragma once
#include <iostream>
#include <string>
#include "User.h"
//Coded by: Molly Morris
using namespace std;
class User
{
private:
  string userID;
  string password;
public:
	User(string account, string pass){
    userID = account;
    password = pass;
  }
};
