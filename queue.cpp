// File: Queue.cpp
// Description: Queue implementation using linked list
// Created by: Immanuel Maina
// Last Modified: April 10, 2025

#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue() {
    front = rear = nullptr;
}

Queue::~Queue() {
    while (!isEmpty()) {
        dequeue();
    }
}

void Queue::enqueue(int value) {
    QueueNode* newNode = new QueueNode;
    newNode->data = value;
    newNode->next = nullptr;
    if (isEmpty()) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
}

int Queue::dequeue() {
    if (isEmpty()) return -1;
    QueueNode* temp = front;
    int value = temp->data;
    front = front->next;
    delete temp;
    return value;
}

bool Queue::isEmpty() {
    return front == nullptr;
}

void Queue::display() {
    QueueNode* current = front;
    while (current != nullptr) {
        cout << current->data;
        current = current->next;
    }
}
