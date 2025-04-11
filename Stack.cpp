// File: Stack.cpp
// Description: Stack implementation using linked list
// Created by: Immanuel Maina
// Last Modified: April 10, 2025

#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack() {
    top = nullptr;
}

Stack::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}

void Stack::push(int value) {
    StackNode* newNode = new StackNode;
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

int Stack::pop() {
    if (isEmpty()) return -1;
    StackNode* temp = top;
    int value = temp->data;
    top = top->next;
    delete temp;
    return value;
}

bool Stack::isEmpty() {
    return top == nullptr;
}

void Stack::display() {
    StackNode* current = top;
    while (current != nullptr) {
        cout << current->data;
        current = current->next;
    }
}
