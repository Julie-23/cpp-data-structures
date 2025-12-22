#ifndef LINKEDLISTPRACTICE_HPP
#define LINKEDLISTPRACTICE_HPP

#include <iostream>


struct Node {
    int data;
    Node* next;
};

class LinkedList{
    private:
        Node* head;
    public:
        LinkedList();
        void insertFront(int value);
        void deleteValue(int value);
        void print() const;
        ~LinkedList();
};

#endif