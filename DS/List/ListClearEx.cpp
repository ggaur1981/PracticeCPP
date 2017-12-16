#include <iostream>
#include <list>

using namespace std;

void print(list<int> input) {
    typedef list<int>::iterator It;
    for (It it = input.begin(); it != input.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";
}

int main ()
{
    std::list<int> mylist;
    std::list<int>::iterator it;

    mylist.push_back (100);
    mylist.push_back (200);
    mylist.push_back (300);

    print(mylist);

    mylist.clear();
    mylist.push_back (1101);
    mylist.push_back (2202);

    print(mylist);

    return 0;
}

/* Output

100 200 300
1101 2202

*/
