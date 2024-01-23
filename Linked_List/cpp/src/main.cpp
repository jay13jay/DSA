#include "../include/push.h"
#include "../include/display.h"
#include "../include/insertAfter.h"
#include "../include/append.h"
#include "../include/nodeStruct.h"

#include <iostream>

using namespace std;

int main()
{
    cout << "Starting Program\n";
    struct Node *head = NULL;
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);

    insertAfter(&head, 30, 50);
    insertAfter(&head, 40, 100);

    append(&head, 150);
    push(&head, 1);

    displayList(head);

    return 0;
}