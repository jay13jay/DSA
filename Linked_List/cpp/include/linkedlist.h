#pragma once

#include <iostream>

class LinkedList
{
private:
    struct Node;
    struct Node *head = NULL;

public:
    // Variables
    int mlist_len{0};

    // Init
    LinkedList();

    // Function declarations
    void push(int);
    void append(int);
    void insertAfter(int, int);
    bool deleteN(int);
    void reverse();
    void display();
};