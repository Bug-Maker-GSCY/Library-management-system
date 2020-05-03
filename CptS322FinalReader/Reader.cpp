#include "Reader.h"

void Reader::setName(string nameInput)
{
	name = nameInput;
}
void Reader::setUserID(int userIDInput)
{
	userID = userIDInput;
}
void Reader::setMaxBookLimit(int maxBookLimitInput)
{
	maxBookLimit = maxBookLimitInput;
}
void Reader::setbooksBorrowed(list<string> booksBorrowedInput)
{
	booksBorrowed = booksBorrowedInput;
}
string Reader::getName(void)
{
	return name;
}
int Reader::getUserID(void)
{
	return userID;
}
int Reader::getMaxLimit(void)
{
	return maxBookLimit;
}
list<string> Reader::getBooksBorrwed(void)
{
	return booksBorrowed;
}
void Reader::bookCount(string title, int ID, int number)
{
	// Adds the title of books being checked out to the total list of all books the user has checked out
	booksBorrowed.push_front(title);
}