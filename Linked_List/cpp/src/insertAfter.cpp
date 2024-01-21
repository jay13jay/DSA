#include "../include/insertAfter.h"
#include "../include/nodeStruct.h"

#include <iostream>

using namespace std;

void insertAfter(struct Node *prev_node, int node_data)
{
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL)
    {
        cout << "the given previous node is required,cannot be NULL";
        return;
    }

    /* 2. create and allocate new node */
    struct Node *newNode = new Node;

    /* 3. assign data to the node */
    newNode->data = node_data;

    /* 4. Make next of new node as next of prev_node */
    newNode->next = prev_node->next;

    /* 5. move the next of prev_node as new_node */
    prev_node->next = newNode;
}