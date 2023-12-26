// stack.cpp

#include "stack.h"
#include <iostream>

StackNode::StackNode(Node* data) : data(data), next(nullptr) {}

Stack::Stack() : top(nullptr) {}

bool Stack::isEmpty() {
    return top == nullptr;
}

void Stack::push(Node* data) {
    StackNode* newNode = new StackNode(data);
    newNode->next = top;
    top = newNode;
}

Node* Stack::pop() {
    if (isEmpty()) {
        return nullptr;
    }

    StackNode* temp = top;
    Node* data = temp->data;
    top = temp->next;
    delete temp;

    return data;
}
