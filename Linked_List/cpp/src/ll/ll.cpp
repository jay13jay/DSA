#include <iostream>

class LinkedList
{
private:
    /* individual node object */
    struct Node
    {
        int data;
        struct Node *next;
    };
    struct Node *head = NULL;

public:
    LinkedList()
    {
        // struct Node *head = NULL;
    }
    void push(int);
    void display();
};

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

int main()
{
    std::cout << "Starting..." << std::endl;
    LinkedList myLL;
    myLL.push(5);
    myLL.display();
}
