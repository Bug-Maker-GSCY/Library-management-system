#include "Librarian.h"


Librarian::Librarian(Library newLibrary) {
	library = newLibrary;
}

void Librarian::addBook(int id, string title) {
	library.addBook(id, title);
}


bool Librarian::removeBook(string title) {
	return library.removeBook(title);
}

Book Librarian::searchBook(string title) {
	return library.searchBook(title);
}

bool Librarian::holdBook(string title) {
	return library.holdBook(title);
}


bool Librarian::checkoutBook(string title) {
	return library.checkoutBook(title);
}

bool Librarian::returnBook(string title) {
	return library.returnBook(title);
}

