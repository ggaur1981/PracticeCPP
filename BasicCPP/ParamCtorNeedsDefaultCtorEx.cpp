#include <iostream>
#include <cstring>
using namespace std;

#define MAX_NAME_LENGTH 15

/**
 * Illustrate constructor concepts.
 *
 * If parameterized construcor has been defined then default constructor should be defined too
 * it won't be autogenerated.
 */

class Person {
public:
	/**
	 * Parameterized Person Constructor
	 */
	Person(const char *name, int age) {
		strcpy(mName, name);
		mAge = age;
	}

	/**
	 * Method to display Person's info.
	 */
	void displayInfo() {
		cout << "Person's name is: " << mName
			<< ", name length " << strlen(mName)
			<< ", and age is: " << mAge << endl;
	}

private:
	char mName[MAX_NAME_LENGTH + 1]; // Extra character for storing NULL char
	int mAge;
};

int main(int argc, char *argv[]) {

	// Calls parameterized ctor
	Person p1("Gaurav Gaur", 36);

	// This prints p1's info
	p1.displayInfo();

	// Since parameterized constructor has been defined
	// We must define default constructor too.
	//Person p2; // Note: Uncommenting this will be compilation error
	return 0;
}