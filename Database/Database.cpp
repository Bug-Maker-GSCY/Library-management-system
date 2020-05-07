#include "Database.h"
#include <iostream>
#include <list>
using namespace std

Class Database{

    private list<Book> data;
    private int lastID;

    public Database()
    {
        this->data = {};
        this->lastID = 0;
    }

    void insert(string title, string author, int ISBN, string pudDate, string location)
    {
        Book *b = new Book(lastID++ ,title, author, ISBN, pudDate, location);
        this->data.
    }

    bool remove(int id)
    {
        for(Book b : this->data){
            if(b->id == id){
                this->data.remove(b);
            }
        }
        return false;
    }

    bool update(int id, string title, string author, int ISBN, string pubDate, string location)
    {
        for(Book b : this->data){
            if(b->id == id){
                b->title = title;
                b->author = author;
                b->ISBN = ISBN;
                b->pubDate = pubDate;
                b->location = location;
                return true;
            }
        }
        return false;
    }

    Book search(string title)
    {
        for(Book b : this->data){
            if(b->title == title){
                return *b;
            }
        }
        return false;
    }
}
