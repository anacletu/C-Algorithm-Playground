#ifndef SINGLY_LIST_H
#define SINGLY_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct LinkedList
{
    Node *head;
} LinkedList;

// Function declaration for insertion
Node *createNode(int value);
void insertNode(LinkedList *list, int value);

// Function declaration for deletion

// Function declaration for displaying

#endif // SINGLY_LIST_H