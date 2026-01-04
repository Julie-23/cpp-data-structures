# C++ Data Structures

This repository contains from-scratch implementations of core data structures in **C++**, developed as part of my coursework and self-study for **Data Structures & Abstractions**.  
The focus is on **clean abstract data types (ADTs)**, **pointer-based memory management**, and **algorithmic reasoning**, rather than relying on the C++ STL.

---

## Current Implementations

### Singly Linked List
- Node-based pointer implementation
- Operations:
  - Insert at front
  - Insert at back
  - Remove by value
  - Search
  - Check if empty
- Maintains internal size invariant
- Separate interface (`.hpp`) and implementation (`.cpp`)

### Stack (in progress)
- Implemented as an ADT **on top of the linked list**
- Enforces LIFO behavior
- Planned operations:
  - `push`
  - `pop`
  - `peek`
  - `isEmpty`

---

## Project Goals

- Strengthen understanding of **data structures and abstractions**
- Practice designing and implementing **ADTs**
- Gain confidence with:
  - Pointers
  - Dynamic memory allocation
  - Invariants and edge cases
- Prepare for exams, whiteboard coding, and technical interviews

---

## Design Principles

- **Abstraction first**: Interfaces are separated from implementations
- **No STL containers** for internal storage
- **Efficiency-aware**: Operations are designed with time complexity in mind
- **Readable & testable**: Code is organized into modular files

---

## Technologies

- Language: **C++**
- Build style: Multi-file compilation
- Tools: Git, GitHub

---

## Planned Extensions

- Queue ADT (linked list–based)
- Binary Search Tree
- Runtime analysis comparisons
- Unit tests for core operations
- CLI-based testing interface

---

## Context

This project is part of my ongoing self-learning in computer science and complements my coursework in **Data Structures & Abstractions**.

