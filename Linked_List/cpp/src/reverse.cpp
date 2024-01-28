#include "../include/deleteN.h"
#include "../include/nodeStruct.h"

#include <iostream>

void reverseI(struct Node **head)
/* reverse linked list values using iterative approach */
{
    /* STEP 1 */
    struct Node *cur = new Node; // create nodes to hold data for current, previous, and next nodes
    struct Node *prev = new Node;
    struct Node *next = new Node;

    /* STEP 2 */
    cur = *head; // go to first node in the list, pointed to by head
    /* STEP 3 */
    prev = NULL; // as we're reversing the list, the last node will point to null

    /* STEP 4 */
    while (cur != NULL) // Loop over list until current is null
                        // prev will be the old last node/new first node at end of loop
    {
        /* STEP 4A */
        next = cur->next; // first step is storing the next node before we break the link to it
        // std::cout << "Next: " << next->data;
        /* STEP 4B */
        cur->next = prev; // as mentioned current will now point to previous node instead of next node
        /* STEP 4C */
        prev = cur; // move previous up one node
        /* STEP 4D */
        cur = next; // move current to the next node
    }
    /* STEP 5*/
    *head = prev; // list is now reversed, so we point head to the old last/new first node
    // std::cout << "Head: " << head;
}
