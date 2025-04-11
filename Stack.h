// File: Stack.h
// Description: Stack definition using linked list
// Created by: Immanuel Maina
// Last Modified: April 10, 2025

#ifndef STACK_H
#define STACK_H

struct StackNode {
    int data;
    StackNode* next;
};

class Stack {
private:
    StackNode* top;

public:
    Stack();
    ~Stack();
    void push(int value);
    int pop();
    bool isEmpty();
    void display();
};

#endif

