#include <iostream>
#include <string>
using namespace std;

class Librarian : public User
{
private:
	Library library;
public:
	Librarian(Library newLibrary);
	void addBook(int id, string title);
	bool removeBook(string title);
	Book searchBook(string title);
	bool holdBook(string title);
	bool checkoutBook(string title);
	bool returnBook(string title);

};
