#pragma once
// MyString class declaration goes here

class myString {
private:
	char *cptr;
public:
	// default constructor 
	myString();
	myString(char *);

	// copy constructor
	myString(myString &obj);

	// destructor 
	~myString();

	// overloaded = operator
	const myString operator=(const myString &right);

	// overloaded + operator
	const myString operator+(const myString &right);

	// overloaded == operator
	bool operator==(const myString &right);

	// getter function returns the char pointer
	const char * c_str();




};