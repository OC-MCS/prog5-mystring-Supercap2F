// test driver code goes here
#include "MyString.h"
#include <iostream>

using namespace std;

int main() {
	myString s1;
	myString s2("Hello World!");

	cout << "S1: " << s1 << endl;
	cout << "S2: " << s2 << endl;
	cout << endl;
	s1 = s2;

	cout << "Strings combined" << endl;
	cout << "S1: " << s1 << endl;
	cout << "S2: " << s2 << endl;
	cout << endl;
	// strings added
	myString s3;
	s3 = s1 + s2;
	cout << "Strings added" << endl;
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

	s2 = "hello world";
	cout << "Are the strings equal?" << endl;
	cout << "S1: \"" << s1 << "\"" << endl;
	cout << "S2: \"" << s2 << "\"" << endl;
	if (s1 == s2) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}