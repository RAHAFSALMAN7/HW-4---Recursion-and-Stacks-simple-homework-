#pragma once
// singly_list.h

#ifndef SINGLY_LIST_H
#define SINGLY_LIST_H

class Node {
public:
    int data;
    Node* next;

    Node(int data);
};

class SinglyList {
public:
    Node* head;

    SinglyList();
    void insertNode(int data);
    void displayList();
};

#endif // SINGLY_LIST_H
