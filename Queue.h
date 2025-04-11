// File: Queue.h
// Description: Queue definition using linked list
// Created by: Immanuel Maina
// Last Modified: April 10, 2025

#ifndef QUEUE_H
#define QUEUE_H

struct QueueNode {
    int data;
    QueueNode* next;
};

class Queue {
private:
    QueueNode* front;
    QueueNode* rear;

public:
    Queue();
    ~Queue();
    void enqueue(int value);
    int dequeue();
    bool isEmpty();
    void display();
};

#endif

