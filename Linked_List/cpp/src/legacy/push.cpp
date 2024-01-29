#include "../include/push.h"
#include "../include/nodeStruct.h"

void push(struct Node **head, int node_data)
{
    /* 1. create and allocate node */
    struct Node *newNode = new Node;

    /* 2. assign data to node */
    newNode->data = node_data;

    /* 3. set next of new node as head */
    newNode->next = *head;

    /* 4. move the head to point to the new node */
    *head = newNode;
}