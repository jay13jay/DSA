#include "../include/deleteN.h"
#include "../include/nodeStruct.h"

#include <iostream>

using namespace std;

void deleteN(struct Node *head, int n)
{
    // struct Node* *temp1 = head; // head is pointer to first node, so we're setting temp1 to the first node
    struct Node *temp1 = head; /* used in step 5*/

    if (n == 1) // special case, if we're changing the first node
    {
        head = temp1->next; // change head to point to second node instead of first
        free(temp1);        // deallocate the first node, freeing the memory
        return;
    }

    int i{};
    for (i = 0; i < n - 2; i++)
    {
        temp1 = temp1->next; // iterate through list until n-1 is reached, the node before the one to delete
    }
    struct Node *temp2 = temp1->next; // set temp2 to the nth node, the node to delete
    // we now have the node to delete, and the prior node so we can fix the pointer
    temp1->next = temp2->next; // set n-1 pointer to point to n+1
    free(temp2);               // delete temp2, the nth node
}
