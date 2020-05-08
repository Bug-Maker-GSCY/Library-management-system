#include "Admin.h"
//Coded by: Molly Morris
//Sets values of parent class User for the Admin
Admin::Admin(string account, string password) {
    userID = account;
    this->password = password;
}
//Creates a new user and adds it to the list of users
bool Admin::newUser(string account, string password) {
    User *newUser = new User(account, password);
    userList.push_back(newUser);
    if (findUser(account)) {
        return true;
    }
    return false;
}
//Finds the user whose username is input and deletes their account
//from the list of users.
bool Admin::removeUserid(string account) {
    std::vector<User*>::iterator it;
    int i = 0;
    for (it = userList.begin(); it != userList.end(); ++it, ++i) {
        if (account == userList[i]->getUserID()) {
            userList.erase(it);
            return true;
        }
    }
    return false;
}
    

bool Admin::findUser(string account) {
    std::vector<User*>::iterator it;
    int i = 0;
    for (it = userList.begin(); it != userList.end(); ++it, ++i) {
        if (account == userList[i]->getUserID()) {
            return true;
        }
    }
    return false;
}
