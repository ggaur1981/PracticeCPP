#include <iostream>
#include "Queue.h"

void 
Queue::enqueue(int data) {
    mList.push_back(data);
}

int
Queue::dequeue() {
    int result = mList.front();
    mList.pop_front();
    return result;
}

int
Queue::front() const
{
    return mList.front();
}

void
Queue::print() const {
    if (mList.empty())
        std::cout << "Queue is empty!" << std::endl;

    typedef std::list<int>::const_iterator It;
    for (It it = mList.begin(); it != mList.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

