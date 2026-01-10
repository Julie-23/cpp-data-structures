//DataStructs.cpp

#include <iostream>
#include "Stack.hpp"
#include "Queue.hpp"

int main() {
    // -----------------------
    // Test Stack
    // -----------------------
    Stack s;
    std::cout << "Testing Stack..." << std::endl;

    // Test isEmpty on empty stack
    std::cout << "Stack empty? " << (s.isEmpty() ? "Yes" : "No") << std::endl;

    // Push elements
    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Stack top (peek): " << s.peek() << std::endl; // 30

    // Pop elements
    std::cout << "Popped: " << s.pop() << std::endl; // 30
    std::cout << "Popped: " << s.pop() << std::endl; // 20

    std::cout << "Stack top (peek): " << s.peek() << std::endl; // 10
    std::cout << "Stack empty? " << (s.isEmpty() ? "Yes" : "No") << std::endl;

    // -----------------------
    // Test Queue
    // -----------------------
    Queue q;
    std::cout << "\nTesting Queue..." << std::endl;

    // Test isEmpty on empty queue
    std::cout << "Queue empty? " << (q.isEmpty() ? "Yes" : "No") << std::endl;

    // Enqueue elements
    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);

    std::cout << "Queue front: " << q.getFront() << std::endl; // 100

    // Dequeue elements
    q.dequeue();
    std::cout << "Queue front after dequeue: " << q.getFront() << std::endl; // 200

    q.dequeue();
    q.dequeue();

    std::cout << "Queue empty? " << (q.isEmpty() ? "Yes" : "No") << std::endl;

    // Optional: test exception
    try {
        q.getFront();
    } catch (std::runtime_error& e) {
        std::cout << "Caught exception as expected: " << e.what() << std::endl;
    }

    return 0;
}
