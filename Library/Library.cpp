//Coder: Zhuoru Song
#include "Library.h"

Library::Library()
{
	this->pList = NULL;
}

void Library::addBook(int id, string title, string author, string pubDate, string location)
{
	Node* newBook = new Node;
	newBook->book.ISBN = id;
	newBook->book.title = title;
	newBook->book.author = author;
	newBook->book.location = location;

	newBook->pNext = this->pList;
	this->pList = newBook;
}

bool Library::removeBook(string title)
{
	Node* pCur = pList;
	Node* pPrev = NULL;
	while (pCur != NULL)
	{
		if (pCur->book.title == title)
		{
			if (pPrev != NULL)
			{
				pPrev->pNext = pCur->pNext;
			}
			else
			{
				this->pList = pCur->pNext;
			}
			delete pCur;
			break;
		}
		pPrev = pCur;
		pCur = pCur->pNext;
	}
}

Book Library::searchBook(string title)
{
	Node* pCur = pList;
	Book ret;
	while (pCur != NULL)
	{
		if (pCur->book.title == title)
		{
			ret = pCur->book;
		}
		pCur = pCur->pNext;
	}
	return ret;
}

bool Library::holdBook(string title)
{
	Node* pCur = pList;
	while (pCur != NULL)
	{
		if (pCur->book.title == title)
		{
			if (pCur->book.isHold == false)
			{
				pCur->book.isHold = true;
				return true;
			}
			else
			{
				return false;
			}
			break;
		}
		pCur = pCur->pNext;
	}
	return false;
}

bool Library::chechoutBook(string title)
{
	Node* pCur = pList;
	while (pCur != NULL)
	{
		if (pCur->book.title == title)
		{
			if (pCur->book.isCheakedout == false && pCur->book.isHold == false) //hold must be removed first to check out.
			{
				pCur->book.isCheakedout = true;
				return true;
			}
			else
			{
				return false;
			}
			break;
		}
		pCur = pCur->pNext;
	}
	return false;
}

bool Library::returnBook(string title)
{
	Node* pCur = pList;
	while (pCur != NULL)
	{
		if (pCur->book.title == title)
		{
			pCur->book.isCheakedout = false;
			return true;
		}
		pCur = pCur->pNext;
	}
	return false;
}

bool Library::removeHold(string title)
{
	Node* pCur = pList;
	while (pCur != NULL)
	{
		if (pCur->book.title == title)
		{
			pCur->book.isHold = false;
			return true;
		}
		pCur = pCur->pNext;
	}
	return false;
}
