//Queue.hpp

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "LinkedList.hpp"

class Queue {
private:
    LinkedList list;
public:
    bool isEmpty() const;
    void enqueue(int value);
    void dequeue();
    int getFront() const;
};

#endif