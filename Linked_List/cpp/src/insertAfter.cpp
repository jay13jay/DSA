#include "../include/insertAfter.h"
#include "../include/nodeStruct.h"

#include <iostream>

using namespace std;

// void insertAfter(struct Node *prev_node, int node_data)

void insertAfter(struct Node *head, int insert_node, int node_data)
{
    /* 1. create and allocate node */
    struct Node *newNode = new Node;

    struct Node *last = head; /* used in step 5*/

    /* 2. assign data to the node */
    newNode->data = node_data;

    /* 3. set next pointer of new node to null as its the last node*/
    newNode->next = NULL;

    /* 4. if list is empty, new node becomes first node */
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    /* 5. Else traverse till the matching node */
    while (last->next != NULL)
    {
        if (last->data == insert_node)
        {
            // cout << "Match found, inserting new node\n";
            newNode->next = last->next;
            last->next = newNode;
            return;
        }

        last = last->next;
    }
    cout << "Node not found, no data inserted";
    /* 6. Change the next of last node */
    last->next = newNode;
    return;
}