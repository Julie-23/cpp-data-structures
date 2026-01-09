//Queue.hpp

#include "LinkedList.hpp"
#ifndef QUEUE_HPP
#define QUEUE_HPP

class Queue{
private:
    LinkedList list;
public:
    bool isEmpty();
    void enqueue(int value);
    void dequeue();
    int front();
    ~Queue();
};

#endif