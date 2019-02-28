#pragma once
#include <iostream>
using namespace std;
// MyString class declaration goes here
class myString;
ostream &operator << (ostream &strm, const myString &obj);

class myString {
private:
	char *cptr;
public:
	// default constructor 
	myString();
	myString(const char *);

	// copy constructor
	myString(myString &obj);

	// destructor 
	~myString();

	// overloaded = operator
	myString operator=(const myString &right);

	// overloaded + operator
	myString operator+(const myString &right);

	// overloaded == operator
	bool operator==(const myString &right);

	// getter function returns the char pointer
	char * c_str() const;

};