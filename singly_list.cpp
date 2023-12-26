// singly_list.cpp

#include "singly_list.h"
#include <iostream>

Node::Node(int data) : data(data), next(nullptr) {}

SinglyList::SinglyList() : head(nullptr) {}

void SinglyList::insertNode(int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void SinglyList::displayList() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -------> ";
        current = current->next;
    }
    std::cout << "NULL" << std::endl;
}
