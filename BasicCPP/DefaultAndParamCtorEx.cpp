#include <iostream>
#include <cstring>
using namespace std;

#define MAX_NAME_LENGTH 15

/**
 * Illustrate constructor concepts.
 */
class Person {
public:
	/**
	 * Default Person Constructor 
	 */
	Person() {
		strcpy(mName, "");
		mAge = 0;
	}

	/**
	 * Parameterized Person Constructor
	 */
	Person(const char *name, int age) {
		strcpy(mName, name);
		mAge = age;
	}

	/**
	 * Method to diplay Person's info. 
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

	// Displaying p1, p2, and p3 will not have issue as length of name is less than MAX_NAME_LENGTH
	Person p1;
	Person p2("ABCDEFGHIJKLMN", 10); // 14
	Person p3("ABCDEFGHIJKLMNO", 20); // 15
	// The length of name is more than MAX_NAME_LENGTH which will have undefined behavior
	// Program may print some garbage while priting this or may crash even!
	Person p4("ABCDEFGHIJKLMNOP", 30);
	p1.displayInfo();
	p2.displayInfo();
	p3.displayInfo();
	p4.displayInfo();
	return 0;
}