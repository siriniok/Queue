// Queue.cpp : Class Queue

#include "stdafx.h"

#include "Queue.h"


    void Queue::init() { 
        front = NULL;
        back = NULL;
        count = 0;
    }

    Queue::Queue() { 
        init();
    }

    Queue::Queue(int element) { 
        init();
        enqueue(element);
    }

    Queue::Queue(const Queue &q) { 
        init();
        if (q.isEmpty()) {
            return;
        } else {
            const Node* current = q.front;            
            int size = q.getSize();

            for (int i = 0; i < size; size--) {
                enqueue(current->data);
                current = current->next;
            }
        }
    }

    

    void Queue::enqueue(int element) {
        // Create a new node
        Node* tmp = new Node();
        tmp->data = element;
        tmp->next = NULL;

        if (isEmpty()) {
            // Add the first element
            front = back = tmp;
        } else {
            // Append to the list
            back->next = tmp;
            back = tmp;
        }

        count++;
    }

    int Queue::dequeue() {          
        if (isEmpty())
            throw new EmptyQueueException();

        int ret = front->data;
        Node* tmp = front;

        // Move the front pointer to next node
        front = front->next;

        count--;
        delete tmp;
        return ret;   
    }      
 
    int Queue::getFront() const { 
        if (isEmpty())
            throw new EmptyQueueException();

        return front->data;
    }
 
    int Queue::getSize() const {
        return count;
    }

    bool Queue::isEmpty() const {
        return count == 0 ? true : false;
    }

    bool Queue::operator==(const Queue &other) const {
        if (this->getSize() != other.getSize()) {
            return false;
        } else {        
            const Node* current = this->front;
            const Node* another = other.front;                    
            int size = this->getSize();
            for (int i = 0; i < size; size--) {
                if (current->data != another->data)
                    return false;
                else {current = current->next;
                another = another->next;}
            }
            return true;
        }
    }

    bool Queue::operator!=(const Queue &other) const {
        return !(*this == other);
    }
