#include <iostream>
#include "Stack.h"
using namespace std;

void pushWrapper(Stack &s, int elem) {
    cout << "Pushing " << elem << " on to stack\n";
    s.push(elem);
}

int main() {
    Stack s;
    pushWrapper(s, 10);
    pushWrapper(s, -1);
    pushWrapper(s, 202);

    cout << "Print stack: ";
    s.print();

    cout << "Pop last element out of stack\n";
    s.pop();

    cout << "Print stack: ";
    s.print();

    cout << "Top element in the stack is: " << s.top() << endl;
    return 0;
}

/* Output

Pushing 10 on to stack
Pushing -1 on to stack
Pushing 202 on to stack
Print stack: 10 -1 202
Pop last element out of stack
Print stack: 10 -1
Top element in the stack is: -1

*/
