# Stack and Queue Implementations Using LinkedList

This project implements **Stack** and **Queue** data structures in C++ using a **LinkedList wrapper design**. The goal is to practice **object-oriented programming**, **dynamic memory management**, and **abstract data type (ADT) design** in C++.

## Features

### Stack
- LIFO (Last-In-First-Out) behavior
- Supports:
  - `push(int value)` – insert element at the top
  - `pop()` – remove and return the top element
  - `peek()` – view the top element without removing it
  - `isEmpty()` – check if the stack is empty

### Queue
- FIFO (First-In-First-Out) behavior
- Supports:
  - `enqueue(int value)` – add element to the back
  - `dequeue()` – remove the front element
  - `getFront()` – view the front element without removing it
  - `isEmpty()` – check if the queue is empty

### LinkedList Wrapper
- Both Stack and Queue delegate node management to a `LinkedList` class
- Dynamic memory is automatically handled by the LinkedList destructor
- No raw pointers are manually managed in Stack or Queue

## Files
- `LinkedList.hpp` / `.cpp` – Node and linked list implementation
- `Stack.hpp` / `.cpp` – Stack class wrapping LinkedList
- `Queue.hpp` / `.cpp` – Queue class wrapping LinkedList
- `DataStructs.cpp` – Test program demonstrating functionality

## Usage

1. Compile the project using g++:
```bash
g++ -std=c++17 LinkedList.cpp Stack.cpp Queue.cpp DataStructs.cpp -o test
