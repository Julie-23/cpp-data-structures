//Stack.cpp
#include "Stack.hpp"
#include <stdexcept>

void Stack::push(int value){
    list.insertFront(value);
}

int Stack::pop(){
    if (list.isEmpty()){
        throw std::runtime_error("Error: Cannot remove from empty Stack");
    } else{
        int value = list.getFront();
        list.removeFront();
        return value;
    }
}

int Stack::peek() const{
    if (list.isEmpty()) {
        throw std::runtime_error("Error: Cannot peek an empty Stack");
    } else{
        return list.getFront();
    }
}
bool Stack::isEmpty() const{
    return list.isEmpty();
}

//unnecessary?
Stack::~Stack(){

}