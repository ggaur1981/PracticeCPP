#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <list>

class Queue {
public:
    void enqueue(int data);
    int dequeue();
    int front() const;
    void print() const;
private:
    std::list<int> mList;
};

#endif

