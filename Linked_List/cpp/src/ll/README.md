# Linked List

## Description

Class to implement a linked list

### Functions

#### push

Purpose: insert a node to the beginning of the list

#### append

Purpose: insert a node to the end of the list

#### insertAfter

Purpose: insert a node after nth node

#### delete

Purpose: delete nth node from the list

#### reverseI

Purpose: reverses the list with an iterative approach

Abstract:

1. create 3 node structures

- prev: n-1 (node before the one to be removed)
- cur: nth node (node to be removed)
- next: n+1 (node n-1 will point to after deletion of node n)

2. set cur to head, the first node in the list
3. set prev to null
4. loop over the list until cur is NULL (to the last list item)
   4a) set 'next' to current->next
   4b) set current->next to 'prev' (reverse the current pointer)
   4c) set 'prev' to 'current'
   4d) set 'current' to 'next'
5. (after loop completes) set 'head' to 'prev'
