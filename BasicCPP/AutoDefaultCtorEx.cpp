#include <iostream>
#include <cstring>
using namespace std;

#define MAX_NAME_LENGTH 15

/**
* Illustrate constructor concepts.
*
* When there is no constructor defined, a constructor will be auto genearted by compiler.
*/
class Person {
public:

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

	// Calls auto generated default constructor
	Person p1;
	// This prints garbage
	p1.displayInfo();
	return 0;
}
