#include <iostream>
#include <cstring>
using namespace std;

/**
 * Copy ctor example.
 *
 * This class illustrates copy constructor and copy assignment operator implementation.
 */
class String {
public:
	String(const char *str);
	~String();
	String(const String &rhs);
	String& operator =(const String &rhs);

	void alter(const char *pNewStr);
	void display();
private:
	char *mpStr;
	int mSize;
};

// Default Ctor
String::
String(const char *str = NULL) {
	if (str != NULL) {
		mSize = strlen(str);
		mpStr = new char[mSize + 1];
		strcpy(mpStr, str);
	}
	else {
		mpStr = NULL;
		mSize = 0;
	}
}

// Dtor
String::
~String() {
	if (mpStr != NULL) {
		delete[] mpStr;
		mpStr = NULL;
		mSize = 0;
	}
}

// Copy Ctor
String::
String(const String &rhs) {
	if (rhs.mpStr != NULL) {
		mSize = rhs.mSize;
		mpStr = new char[mSize + 1];
		strcpy(mpStr, rhs.mpStr);
	}
	else {
		mpStr = NULL;
		mSize = 0;
	}
}

// Copy assignment operator
String&
String::
operator = (const String &rhs) {
	if (this != &rhs) {
		if (mpStr != NULL) {
			delete[] mpStr;
			mpStr = NULL;
			mSize = 0;
		}
		if (rhs.mpStr != NULL) {
			mSize = rhs.mSize;
			mpStr = new char[mSize + 1];
			strcpy(mpStr, rhs.mpStr);
		}
		else {
			mSize = 0;
			mpStr = NULL;
		}
	}
	return *this;
}

// Alter method
void
String::
alter(const char *pNewStr) {
	if (mpStr != NULL) {
		delete[] mpStr;
	}
	mSize = strlen(pNewStr);
	mpStr = new char[mSize + 1];
	strcpy(mpStr, pNewStr);
}

// Display method
void
String::
display() {
	if (mpStr != NULL) {
		cout << mpStr << endl;
	}
	else {
		cout << "Empty String" << endl;
	}
}

int main(int argc, char *argv[]) {
	String s;
	s.display();

	String s1("Ram");
	s1.display();

	s1.alter("Shyam");
	s1.display();

	String s2 = String("Mohan");
	s2.display();

	String s3 = s2;
	s3.display();
	s3.alter("Radha Mohan");
	s3.display();
	s2.display();

	s3 = s2;
	s3.display();

	s3 = s;
	s3.display();

	String s4 = s3;
	s4.display();
	return 0;
}