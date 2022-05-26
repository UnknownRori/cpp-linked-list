#include <iostream>
#include "src/node.h"

int main()
{
    Node* head = new Node(20);
    Node* first = new Node(30);
    Node* second = new Node(40);
    
    head->next = first;
    first->next = second;

    first->printList();
    head->find(40);

    free(second);
    free(first);
    free(head);
    

    return 0;
}