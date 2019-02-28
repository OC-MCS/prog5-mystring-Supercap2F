// MyString implementation file
#include "MyString.h"
#include <iostream>
#include <cstring>
using namespace std;

// default constructor 
myString::myString() {

}

myString::myString(char *) {

}

// copy constructor
myString::myString(myString &obj) {

}

// destructor 
myString::~myString() {

}

// overloaded = operator
const myString myString::operator=(const myString &right) {

}

// overloaded + operator
const myString myString::operator+(const myString &right) {

}

// overloaded == operator
bool myString::operator==(const myString &right) {

}

// getter function returns the char pointer
const char * myString::c_str() {

}

// overloaded << operator
ostream &operator << (ostream &strm, const myString &obj) {
	// strm << obj.feet << " Feet" << endl;
	return strm;
};





