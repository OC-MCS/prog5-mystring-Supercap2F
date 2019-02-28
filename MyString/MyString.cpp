// MyString implementation file
#include "MyString.h"
#include <iostream>
#include <cstring>
using namespace std;

// default constructor 
myString::myString() {
	cptr = nullptr;
};

myString::myString(const char *str) {
	cptr = new char[strlen(str) + 1];
	strcpy_s(cptr, strlen(str) + 1, str);
};

// copy constructor
myString::myString(myString &obj) {
	cptr = new char[strlen(obj.cptr) + 1];
	strcpy_s(cptr, strlen(obj.cptr) + 1, obj.cptr);
};

// destructor 
myString::~myString() {
	delete [] cptr;
};

// overloaded = operator
myString myString::operator=(const myString &right) {
	int SIZE = strlen(right.cptr) + 1;
	if (this != &right) {
		delete [] cptr;
		cptr = new char[SIZE];
		strcpy_s(cptr, SIZE, right.cptr);
	}

	return *this;
};

// overloaded + operator
myString myString::operator+(const myString &right) {
	myString temp;
	int length = strlen(right.cptr) + strlen(cptr) + 1;

	temp.cptr = new char[length];
	strcpy_s(temp.cptr, length, cptr);
	strcat_s(temp.cptr, length, right.cptr);
	strcat_s(temp.cptr, length, "\0");

	return temp;
};

// overloaded == operator
bool myString::operator==(const myString &right) {
	return !strcmp(cptr, right.cptr);
};

// getter function returns the char pointer
char * myString::c_str() const {
	return cptr;
};

// overloaded << operator
ostream &operator << (ostream &strm, const myString &obj) {
	if (obj.c_str() == nullptr) {
		strm << "\0";
	}
	else {
		strm << obj.c_str();
	}
	
	return strm;
};





