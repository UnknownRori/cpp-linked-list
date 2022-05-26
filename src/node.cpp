/**
 * This is where all linked list logic are defined
 */

#include <iostream>
#include "node.h"


// Node linked list constructor
Node::Node(int value)
{
    data = value;
    next = NULL;
}

// Print all linked node
void Node::printList()
{
    Node* n = next;

    std::cout << data << "\n";

    while(n != NULL) {
        std::cout << n->data << "\n";
        n = n->next;
    }

    free(n);
}

// Find the correspond value inside list
void Node::find(int target)
{
    int i = 0;
    Node* n = next;

    while (n != NULL)
    {
        i++;

        if(n->data == target) break;

        n = n->next;
    }

    std::cout << "Target is Founded at list index : " << i << "\n";

    free(n);
}