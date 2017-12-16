#include <iostream>
#include "Queue.h"
using namespace std;

void enqueueWrapper(Queue &q, int elem) {
    cout << "Enqueuing " << elem << "\n";
    q.enqueue(elem);
}

int main() {
    Queue q;
    enqueueWrapper(q, 10);
    enqueueWrapper(q, 1);
    enqueueWrapper(q, 202);

    cout << "Elements in queue: ";
    q.print();
    
    cout << "Dequeuing first element" << "\n";
    q.dequeue();
    
    cout << "Elements in queue: ";
    q.print();
    
    cout << "Front element in the queue is: " << q.front() << endl;
    return 0;
}

/* Output

Enqueuing 10
Enqueuing 1
Enqueuing 202
Elements in queue: 10 1 202
Dequeuing first element
Elements in queue: 1 202
Front element in the queue is: 1

*/
