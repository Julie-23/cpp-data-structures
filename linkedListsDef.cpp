#include "linkedListPractice.hpp"
#include <iostream>

LinkedList::LinkedList() {
    head = nullptr;
}

void LinkedList::insertFront(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void LinkedList::print() const {
    Node* curr = head;

    while (curr != nullptr) {
        std::cout << curr->data << " -> ";
        curr = curr->next;
    }
    std::cout << "nullptr\n";
}

void LinkedList::deleteValue(int value) {
    if (head == nullptr) return;

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* curr = head;

    while (curr->next != nullptr && curr->next->data != value) {
        curr = curr->next;
    }

    if (curr->next != nullptr) {
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
}

LinkedList::~LinkedList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
