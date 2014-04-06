// EmptyQueueException.cpp : Class EmptyQueueException

#include "stdafx.h"

#include <iostream>

#include "EmptyQueueException.h"

using namespace std;

EmptyQueueException::EmptyQueueException() {
    cout << "EmptyQueueException says: Queue is empty" << endl;
}
