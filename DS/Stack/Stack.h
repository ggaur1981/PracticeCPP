#ifndef _STACK_H_
#define _STACK_H_

#include <list>

class Stack {
public:
    void push(int data);
    int pop();
    int top() const;
    void print() const;
private:
    std::list<int> mList;
};

#endif

