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
    list<int> firstList;
    list<int> secondList;

    // void assign (size_type n, const value_type& val);
    firstList.assign(7,100); // 7 ints with value 100
    print(firstList);

    // template <class InputIterator>
    // void assign (InputIterator first, InputIterator last);
    secondList.assign(firstList.begin(), firstList.end()); // a copy of firstList
    print(secondList);

    // assigning from array
    int myints[] = {1981,10,10};
    firstList.assign(myints, myints+3);
    print(firstList);

    cout << "Size of firstList: " << int(firstList.size()) << '\n';
    cout << "Size of secondList: " << int(secondList.size()) << '\n';
    return 0;
}

/* Output:

100 100 100 100 100 100 100
100 100 100 100 100 100 100
1981 10 10
Size of firstList: 3
Size of secondList: 7

*/
