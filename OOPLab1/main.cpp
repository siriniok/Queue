// main.cpp : Defines the entry point for the console application.

#include "stdafx.h"

#include <iostream>

#include "Queue.h"

using namespace std;

int main() {
   Queue q, anq(100);
   try {
       if (q.isEmpty())
           cout << "Queue is empty" << endl;

       // Enqueue elements
       q.enqueue(100);
       q.enqueue(200);
       q.enqueue(300);
       Queue anq2(q);

       // Comparing queue
       cout << "Comparing two queue: " << ((q == anq)? "equal." : "not equal.") << endl;
       cout << "Comparing two another queue: " << ((q == anq2)? "equal." : "not equal.") << endl;

       // Size of queue
       cout << "Size of queue = " << q.getSize() << endl;

       // Front element
       cout << q.getFront() << endl;

       // Dequeue elements
       cout << q.dequeue() << endl;
       cout << q.dequeue() << endl;
       cout << q.dequeue() << endl;
       cout << q.dequeue() << endl;
   } catch (...) {
       cout << "Some exception occured" << endl;
   }

   system("pause");
}
