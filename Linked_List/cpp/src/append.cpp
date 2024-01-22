#include "../include/append.h"
#include "../include/nodeStruct.h"

void append(struct Node **head, int node_data)
{
    /* 1. create and allocate node */
    struct Node *newNode = new Node;

    struct Node *last = *head; /* used in step 5*/

    /* 2. assign data to the node */
    newNode->data = node_data;

    /* 3. set next pointer of new node to null as its the last node*/
    newNode->next = NULL;

    /* 4. if list is empty, new node becomes first node */
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;

    /* 6. Change the next of last node */
    last->next = newNode;
    return;
}