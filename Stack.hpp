//Stack.hpp
#include "LinkedList.hpp"
#ifndef STACK_HPP
#define STACK_HPP

class Stack{
private:
    LinkedList list;
public:
    void push(int value);
    int pop();
    int peek() const;
    bool isEmpty() const;
};

#endif