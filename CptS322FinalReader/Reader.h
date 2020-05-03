#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;
using std::list;

class Reader
{
	public:

		//Setters for our variavles
		void setName(string nameInput);
		void setUserID(int userIDInput);
		void setMaxBookLimit(int maxBookLimitInput);
		void setbooksBorrowed(list<string> booksBorrowedInput);
		
		//Getters for our variables
		string getName(void);
		int getUserID(void);
		int getMaxLimit(void);
		list<string> getBooksBorrwed(void);

		//Adds the title of the book to the list of books that user has checked out
		void bookCount(string title, int ID, int number);

	private:
		// Our variables
		string name; // name of reader
		int userID; // the reader's ID number
		int maxBookLimit; // the maximum amount of books a user is allowed to check out
		list<string> booksBorrowed; // the list of books the user has borrowed (all time, even if the books have been returned)
};