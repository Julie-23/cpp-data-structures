#include <string>
#include "Node.hpp"

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
    
}