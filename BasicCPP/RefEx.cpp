#include <iostream>
#include <iomanip>
using namespace std;

/** Explain reference concept
 *
 *  Once reference is assigned to a memory location it can't be changed
 *  Rather any change in value to reference updates the memory location
 *  But pointer itself can be changed.
 */
int main() {
    int a = 10;
    int &aRef = a;
    cout << left;
    cout << setw(10)  << "a = " << a << endl;
    cout << setw(10) << "aRef = " << aRef << endl;
    cout << setw(10) << "&aRef = " << &aRef << endl;
    cout << setw(10) << "&a = " << &a << endl;

    aRef = 30; // Reference doesn't change, but only it's value
    cout << "\nAfter assigning aRef = 30" << endl;
    cout << setw(10) << "a = " << a << endl;
    cout << setw(10) << "aRef = " << aRef << endl;
    cout << setw(10) << "&aRef = " << &aRef << endl;
    cout << setw(10) << "&a = " << &a << endl;

    int *ptr = &a;
    cout << "\nNow ptr points to &a" << endl;
    cout << setw(10) << "ptr = " << ptr << endl;
    cout << setw(10) << "*ptr = " << *ptr << endl;

    int b = 40;
    ptr = &b; // pointer can be changed
    cout << "\nNow ptr points to &b" << endl;
    cout << setw(10) << "ptr = " << ptr << endl;
    cout << setw(10) << "*ptr = " << *ptr << endl;

    return 0;
}

/* Output

a =       10
aRef =    10
&aRef =   0x7ffffc49b33c (This can be different on your machine)
&a =      0x7ffffc49b33c (This can be different on your machine)

After assigning aRef = 30
a =       30
aRef =    30
&aRef =   0x7ffffc49b33c (This can be different on your machine)
&a =      0x7ffffc49b33c (This can be different on your machine)

Now ptr points to &a
ptr =     0x7ffffc49b33c (This can be different on your machine)
*ptr =    30

Now ptr points to &b
ptr =     0x7ffffc49b338 (This can be different on your machine)
*ptr =    40

*/
