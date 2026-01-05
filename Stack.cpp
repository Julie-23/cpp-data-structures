//Stack.cpp
#include "Stack.hpp"
#include <iostream>

Stack::Stack(){
    LinkedList list;
}

void Stack::push(int value){
    list.insertFront(value);
}

int Stack::pop(){
    if (list.isEmpty()){
        std::cerr<<"Error: Cannot remove from empty Stack";
    } else{
        int value = list.front();
        list.removeFront();
        return value;
    }
}

int Stack::peek() const{
    if (list.isEmpty()) {
        std::cerr<<"Error: Stack is empty";
    } else{
        return list.front();
    }
}
bool Stack::isEmpty() const{
    return list.isEmpty();
}
