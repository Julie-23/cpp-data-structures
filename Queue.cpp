//Queue.cpp

#include "Queue.hpp"
#include <stdexcept>


bool Queue::isEmpty() const{
    return list.isEmpty();
}

void Queue::enqueue(int value){
    list.insertBack(value);
}

void Queue::dequeue(){
    if (list.isEmpty()){
        throw std::runtime_error("Cannot dequeue from an empty queue.");
    } else{
        list.removeFront();
    }
}

int Queue::getFront() const{
    if (list.isEmpty()){
        throw std::runtime_error("Cannot get front from an empty queue.");
    } else{
        return list.getFront();
    }
}
