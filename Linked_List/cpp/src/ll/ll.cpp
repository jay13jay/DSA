#include <iostream>

#include "ll.h"

struct LinkedList::Node
{
    int data;
    struct Node *next;
};

LinkedList::LinkedList()
{
}

/* function declarations */
void LinkedList::push(int node_data)
{
    /* 1. create and allocate node */
    struct Node *newNode = new Node;

    /* 2. assign data to node */
    newNode->data = node_data;

    /* 3. set next of new node as head */
    newNode->next = head;

    /* 4. move the head to point to the new node */
    head = newNode;

    mlist_len++;
}

void LinkedList::display()
{
    struct Node *node;
    node = head;
    // traverse the list to display each node
    while (node != NULL)
    {
        std::cout << node->data << "-->";
        node = node->next;
    }

    if (node == NULL)
        std::cout << "null\n";
}

void LinkedList::append(int data)
{
    struct Node *newNode = new Node; // new node to add to the list
    struct Node *last = head;        // used to traverse the list until the last node

    newNode->data = data; // set the data
    newNode->next = NULL; // node will be last node, so next points to NULL to terminate the list

    /* check if the list is empty
    if empty, head will point directly to it*/
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;

    mlist_len++;
}

void LinkedList::insertAfter(int insert_node, int data)
{
}

void LinkedList::reverse()
/*
reverse linked list values using iterative approach
see readme for description of the steps
*/
{
    // STEP 1
    // define nodes for current, previous, and next
    struct Node *cur, *prev, *next;
    // STEP 2
    // go to first node in the list, pointed to by head
    cur = head;
    // STEP 3
    prev = NULL;
    // STEP 4
    while (cur != NULL)
    {
        // STEP 4a
        // store the next node before we break the link to it
        next = cur->next;
        // STEP 4b
        // reverse the pointer of the current node
        cur->next = prev;
        // STEP 4c
        //  move previous node up 1 node
        prev = cur;
        // STEP 4d
        // move current node up 1 node
        cur = next;
    }
    // STEP 5
    /*
    list is now reversed, and prev is the last node
    so we point head to prev
    */
    head = prev;
}

bool LinkedList::deleteN(int n)
/*
delete nth node from list
returns true if removal succeeds
returns false if unable to remove node
*/
{
    if (n > mlist_len)
    {
        std::cout << "Index out of range, unable to remove node" << std::endl;
        return false;
    }

    struct Node *temp1 = head;

    // check if we're removing the first node
    if (n == 1)
    {
        head = temp1->next;
        free(temp1);
        mlist_len--;
        return true;
    }

    // iterate thru list until n-1
    int i{};
    for (i = 0; i < n - 2; i++)
    {
        temp1 = temp1->next;
    }

    // set temp2 to the nth node, the node to delete
    struct Node *temp2 = temp1->next;
    // we now have the node to delete, temp2, and the prior node, temp1 so we can fix the pointer
    /*
    temp2 is the node to delete
    temp1 is the prior node to fix pointer after node is removed
    */
    temp1->next = temp2->next; // set pointer to n+1
    free(temp2);               // delete node
    mlist_len--;
    return true;
}
