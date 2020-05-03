//Coder: Zhuoru Song
#pragma once
#include <string>
#include "Book.h"
using std::string;

typedef struct node {
	Book book;
	Node* pNext;
}Node;

class Library
{
public:
	Library();
	void addBook(int id, string title, string author = "", string pubDate = "", string location = "");
	bool removeBook(string title);
	Book searchBook(string title);
	bool holdBook(string title);
	bool chechoutBook(string title);
	bool returnBook(string title);
	bool removeHold(string title);
private:
	Node* pList;	//book list will be construct by calling addBook function.
};
