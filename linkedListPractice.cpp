#include <iostream>
#include "linkedListPractice.hpp"

int main(){

    LinkedList list;

    list.insertFront(30);
    list.insertFront(20);
    list.insertFront(10);

    list.print();          //Looks like 10 -> 20 -> 30 -> nullptr

    list.deleteValue(20);
    list.print(); 
}
