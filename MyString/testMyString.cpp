//====================================================================
// Daniel Andresen
// Due March 1st, 2019
// Programming 2 / Assigment #5
// Description: MyString class
//====================================================================
#include "MyString.h"
#include <iostream>

using namespace std;
void testFunc(myString s);

int main() {

	myString s1;
	myString s2("Hello World!");
	myString s4;

	// initial strings
	cout << "Initial Strings" << endl;
	cout << "S1: " << s1 << endl;
	cout << "S2: " << s2 << endl;
	cout << endl;
	
	// strings equal
	s1 = s2;
	cout << "S1 = S2" << endl;
	cout << "S1: " << s1 << endl;
	cout << "S2: " << s2 << endl;
	cout << endl;

	// strings equal twice
	myString s3;
	s3 = s1 = s2;
	cout << "S3 = S1 = S2" << endl;
	cout << "S1: " << s1 << endl;
	cout << "S2: " << s2 << endl;
	cout << "S3: " << s3 << endl;
	cout << endl;

	// strings added
	s3 = s1 + s2;
	cout << "Strings added: S3 = S1 + S2" << endl;
	cout << "S1: " << s1 << endl;
	cout << "S2: " << s2 << endl;
	cout << "S3: " << s3 << endl;
	cout << endl;

	// strings equal
	cout << "Are the strings equal?" << endl;
	cout << "S1: \"" << s1 << "\"" << endl;
	cout << "S2: \"" << s2 << "\"" << endl;
	if (s1 == s2) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	cout << endl;

	s2 = "not equal";
	cout << "Are the strings equal?" << endl;
	cout << "S1: \"" << s1 << "\"" << endl;
	cout << "S2: \"" << s2 << "\"" << endl;
	if (s1 == s2) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	cout << endl;

	// test passing to a function
	testFunc(s1);

	return 0;
}

//=================================================
// Purpose: check if you can pass a string to a function
// Parameters:
//			myString - string to print
// Returned Value: 
//			none
void testFunc(myString s) {
	cout << "String passed to a function: " << s << endl;
}