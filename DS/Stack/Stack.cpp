#include <iostream>
#include "Stack.h"

void 
Stack::push(int data) {
    mList.push_back(data);
}

int
Stack::pop()
{
    int result = mList.back();
    mList.pop_back();
    return result;
}

int
Stack::top() const {
    return mList.back();
}

void
Stack::print() const {
    if (mList.empty())
        std::cout << "Stack is empty!" << std::endl;

    typedef std::list<int>::const_iterator It;
    for (It it = mList.begin(); it != mList.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

