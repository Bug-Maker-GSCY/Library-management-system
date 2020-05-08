#pragma once
#include <iostream>
#include <string>
#include <vector>

//Coded by: Molly Morris
using namespace std;
class User
{
protected:
    string userID;
    string password;
public:
    //default constructor
    User() {
        userID = "";
        password = "";
    }
    //constructor to set the username and password
    User(string account, string pass) {
        userID = account;
        password = pass;
    }
    //getter for username
    string getUserID(){
        return userID;
    }
    
};
