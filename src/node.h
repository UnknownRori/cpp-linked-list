#ifndef NODE_H
#define NODE_H

// Linked list class
class Node
{
    public:
        int data;
        Node *next;

        Node(int);
        
        void printList();
        void find(int);
};


#endif