//linkedList.cpp
#include "LinkedList.hpp"
#include <iostream>



LinkedList::LinkedList(){
    head = nullptr;
    size = 0;
}

LinkedList::~LinkedList(){
    Node* nextNode = nullptr;
    Node* curr = head;

    while (curr != nullptr){
        nextNode = curr->next;
        delete curr;
        curr = nextNode;
    }

    head = nullptr;
    size = 0;

}

void LinkedList::insertFront(int value){
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    size++;
}

void LinkedList::insertBack(int value){
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    if (head == nullptr){
        head = newNode;
    }else{
        Node* curr = head;
        while (curr->next != nullptr){
            curr = curr->next;
        }
        curr->next = newNode;
    }
    size++;
}

bool LinkedList::search(int value){
    Node* curr = head;

    while (curr != nullptr){
        if (curr->data == value){
            return true;
        }
        curr = curr->next;
    }
    return false;
}

void LinkedList::remove(int value){
    if (head == nullptr){
        return;
    } else if (head->data == value){
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
        return;
    } else{
        Node* curr = head;
        while (curr->next != nullptr && curr->next->data !=value){
            curr = curr->next;
        }
        if (curr->next !=nullptr){
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp;
            size--;
        }
        return;
    }
}

void LinkedList::printList(){
    Node* curr = head;
    while (curr != nullptr){
        std::cout<<curr->data;
        curr = curr->next;
    }
    return;
}

bool LinkedList::isEmpty() const{
    if (size == 0){
        return true;
    }else{
        return false;       
    }
}

void LinkedList::removeFront(){
    if (head = nullptr){
        return;
    } else{
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }

}

void LinkedList::removeBack(){
    if (head = nullptr){
        return;
    } else if (head->next == nullptr){
        delete head;
        head = nullptr;
        return;
    } else {
        
        Node* prev = nullptr;
        Node* curr = head;

        while (curr->next != nullptr){
            prev = curr;
            curr = curr->next;
        }

        prev->next = nullptr;
        delete curr;
    }
}

int LinkedList::getFront() const{
    if (head == nullptr){
        std::cerr<<"Error: List is empty";
    } else{
        return head->data;
    }
}
