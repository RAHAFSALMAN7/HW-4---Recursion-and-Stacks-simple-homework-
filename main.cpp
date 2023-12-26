// main.cpp

#include "singly_list.h"
#include "stack.h"
#include <iostream>

void printListInReverse(Node* head) {
    Stack stack;

    // Push the addresses of nodes onto the stack
    while (head != nullptr) {
        stack.push(head);
        head = head->next;
    }

    // Pop and print nodes from the stack
    while (!stack.isEmpty()) {
        Node* node = stack.pop();
        std::cout << node->data << " -----> ";
    }
    std::cout << "NULL" << std::endl;
}

int main() {
    SinglyList myList;

    // Test the singly list
    myList.insertNode(12);
    myList.insertNode(10);
    myList.insertNode(8);
    myList.insertNode(6);
    myList.insertNode(4);
    myList.insertNode(2);

    std::cout << "Original List: ";
    myList.displayList();

    std::cout << "Reversed List: ";
    printListInReverse(myList.head);

    return 0;
}
