#include <iostream>
using namespace std;

//Defines what a Node object is, which contains an integer data and a pointer to the next node in the list
//The pointer to the next node is of type Node*, which means it points to another Node object at a memory address
//and so it moves to the next through memory addresses
//Node* next is a pointer to a Node object, and it is used to link nodes together in a list
struct Node {
    int data;
    Node* next;
};

//Inserts a new node at the front of the list
//The front being the first node in the list, which is pointed to by head
//To insert a new node at the front, we create a new node (at a memory address), set its data to the value we want to insert, 
//and set its next pointer to the current head
//Then, we update the head to point to the new node, which is now the front of the list (backward because we are inserting at the front)
//-> is used to access the member of a structure or class through a pointer/memory address
//Node*& head is a reference to a pointer to a Node object, and it is used to update the head pointer (new memory address) 
//in the main function
void insertFront(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
//Prints the elements of the list
//We start at the head of the list and traverse through each node using a while loop
void printList(Node* head) {
    Node* curr = head;

    while (curr != nullptr) {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "nullptr\n";
}


int length(Node* head) {
    //Psuedocode:
    //Initialize a counter to 0
    //Traverse the list using a while loop
    //Increment the counter for each node visited
    //Return the counter as the length of the list

    int count = 0;
    Node* curr = head;
    while (curr != nullptr){
        count += 1;
        curr = curr->next;
    }

    return count;
}

void deleteValue(Node*& head, int value){
    Node* curr = head;

    if (head == nullptr) return;

    if (head->data = value){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    while (curr->next != nullptr && curr->next->data != value){
        curr = curr->next;
    }
    if (curr->next != nullptr){
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
        return;
    }
}


int main() {
    Node* head = nullptr;

    insertFront(head, 30);
    insertFront(head, 20);
    insertFront(head, 10);

    printList(head);

}
 
