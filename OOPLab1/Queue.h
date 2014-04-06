// Queue.h : Class Queue

#pragma once
#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "Node.h"
#include "EmptyQueueException.h"

class Queue {
private:
    Node* front; // Pointer to the first node
    Node* back; // Pointer to the last node
    int count; // Counter of nodes

    void init(); // For simulating  delegating constructor
public:
    Queue(); // Default constructor
    Queue(int element); // Parameterized constructor
    Queue(const Queue &q); // Copy constructor
    // Conversion constructors has no sense for this class of data structs

    void enqueue(int element); // Enqueue an element
    int dequeue(); // Dequeue element

    int getFront() const; // Reading first element without dequeue
    int getSize() const; // Getting size of linked list queue
    bool isEmpty() const; // Checking for emptiness

    bool Queue::operator==(const Queue &other) const; // Equal operator
    bool Queue::operator!=(const Queue &other) const; // Not Equal operator
};

#endif