//linkedList.hpp
#include <string>
#include "Node.hpp"
#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
class LinkedList{
    private:
        Node* head;
        int size;
    public:
        void insertFront(int value);
        void insertBack(int value);
        void remove(int value);
        bool search(int value);
        void printList();
        bool isEmpty() const;
        void removeFront();
        int front() const;
    
};
#endif
