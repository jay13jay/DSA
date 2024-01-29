#include "../include/display.h"
#include "../include/nodeStruct.h"

#include <iostream>

using namespace std;

void displayList(struct Node *node)
{
    // traverse the list to display each node
    while (node != NULL)
    {
        cout << node->data << "-->";
        node = node->next;
    }

    if (node == NULL)
        cout << "null\n";
}