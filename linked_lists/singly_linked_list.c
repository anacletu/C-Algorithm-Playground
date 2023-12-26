#include "singly_linked_list.h"

/**
 * Problem:
 * Implement a Singly Linked List.
 *
 * Singly Linked List:
 *   - Basic linked list operations: insert, delete, and display.
 */

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }

    newNode->data = value;
    newNode->next = NULL;

    return newNode;
}

void insertNode(LinkedList *list, int value)
{
    Node *newNode = createNode(value);
    if (newNode == NULL)
    {
        return;
    }

    newNode->next = list->head;
    list->head = newNode;
}