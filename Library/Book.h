#pragma once
#include <string>
using std::string;

class Book
{
public:
	string title;
	string author;
	int ISBN;
	string pubDate;
	string location;
	bool isHold;
	bool isCheakedout;
};

