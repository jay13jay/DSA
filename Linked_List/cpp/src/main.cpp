#include "../include/push.h"
#include "../include/display.h"
#include "../include/insertAfter.h"
#include "../include/nodeStruct.h"
#include "../include/deleteN.h"
#include "../include/reverse.h"

#include <iostream>

using namespace std;

int main()
{
    cout << "Starting Program\n";
    struct Node *head = NULL;

    push(&head, 80);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    push(&head, 100);
    insertAfter(head, 30, 50);

    // deleteN(head, 2);

    displayList(head);

    reverseI(&head);

    displayList(head);

    return 0;
}