/*
Pseudocode for linked list structures:

Node:
    data
    next

LinkedList:
    head
    size

Public operations:

insertFront(value)
insertBack(value)
remove(value)
search(value)
printList()


insertFront(value):
    create newNode
    newNode.data = value
    newNode.next = head
    head = newNode
    size = size + 1


insertBack(value):
    create newNode
    newNode.data = value
    newNode.next = null

    if head is null:
        head = newNode
    else:
        current = head
        while current.next is not null:
            current = current.next
        current.next = newNode

    size = size + 1


*/