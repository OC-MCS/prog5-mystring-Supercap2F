// MyString implementation file
#include "MyString.h"
#include <iostream>
#include <cstring>
using namespace std;

//=================================================
// Purpose: Constructor - initialize variables when the class is created
// Parameters:
//			none
// Returned Value: 
//			none
myString::myString() {
	cptr = nullptr;
};

//=================================================
// Purpose: Constructor - initialize variables to whatever 
//		is passed to the function when the class is created
// Parameters:
//			const char * str - string to load into the class string
// Returned Value: 
//			none
myString::myString(const char *str) {
	cptr = new char[strlen(str) + 1];
	strcpy_s(cptr, strlen(str) + 1, str);
};

//=================================================
// Purpose: Copy Constructor - initialize variables to a class
//	 when the class is initialized
// Parameters:
//			myString - object to load into the class
// Returned Value: 
//			none
myString::myString(myString &obj) {
	cout << "Copy constructor used" << endl;
	cptr = new char[strlen(obj.cptr) + 1];
	strcpy_s(cptr, strlen(obj.cptr) + 1, obj.cptr);
};

//=================================================
// Purpose: Destructor - delete the dynamic memory 
//	when the class is no longer used
// Parameters:
//			none
// Returned Value: 
//			none 
myString::~myString() {
	cout << "Destructor used" << endl;
	delete [] cptr;
};

//=================================================
// Purpose: overloaded = operator = allow us to assign
// classes to each other using the equal sign
// Parameters:
//			myString - object we are setting this too
// Returned Value: 
//			myString - allows us to cascade equals like so s1 = s2 = s3
myString myString::operator=(const myString &right) {
	int SIZE = strlen(right.cptr) + 1;
	if (this != &right) {
		delete[] cptr;
		cptr = new char[SIZE];
		strcpy_s(cptr, SIZE, right.cptr);
	}
	return *this;
};

//=================================================
// Purpose: Overloaded + operator - allows us to add
//	classes without using a function just the + sign
// Parameters:
//			myString - object we are adding to this
// Returned Value: 
//			myString - sum after the addition 
myString myString::operator+(const myString &right) {
	myString temp;
	int length = strlen(right.cptr) + strlen(cptr) + 1;

	temp.cptr = new char[length];
	strcpy_s(temp.cptr, length, cptr);
	strcat_s(temp.cptr, length, right.cptr);
	strcat_s(temp.cptr, length, "\0");

	return temp;
};


//=================================================
// Purpose: Overloaded == operator - allows us to compare
//	classes without using a function just the == sign
// Parameters:
//			myString - object we are comparing with
// Returned Value: 
//			bool - true if this = right, false if not 
bool myString::operator==(const myString &right) {
	return !strcmp(cptr, right.cptr);
};

//=================================================
// Purpose: returns the string so non-friended functions
//	can work with it.
// Parameters:
//			none
// Returned Value: 
//			char * - c string 
char * myString::c_str() const {
	return cptr;
};

//=================================================
// Purpose: overloaded << operator - allows us to use cout
//	with the string class
// Parameters:
//			strm - the stream 
//			myString - the object to be printed 
// Returned Value: 
//			strm - the cout stream
ostream &operator << (ostream &strm, const myString &obj) {
	if (obj.c_str() == nullptr) {
		strm << "\0";
	}
	else {
		strm << obj.c_str();
	}
	
	return strm;
};





