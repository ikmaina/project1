// File: Main.cpp
// Description: Converts decimal number to binary using stack and queue
// Created by: Immanuel Maina
// Last Modified: April 10, 2025

#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

int main() {
    double input;
    cout << "Enter a decimal number: ";
    cin >> input;

    int integerPart = (int)input;
    double decimalPart = input - integerPart;

    Stack intStack;
    Queue fracQueue;

    // Convert integer part
    if (integerPart == 0)
        intStack.push(0);
    else {
        while (integerPart > 0) {
            intStack.push(integerPart % 2);
            integerPart /= 2;
        }
    }

    // Convert fractional part (up to 8 bits for simplicity)
    for (int i = 0; i < 8; ++i) {
        decimalPart *= 2;
        int bit = (int)decimalPart;
        fracQueue.enqueue(bit);
        decimalPart -= bit;
    }

    cout << "Binary: ";
    intStack.display();
    cout << ".";
    fracQueue.display();
    cout << endl;

    return 0;
}
