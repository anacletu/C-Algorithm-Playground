#include "../../linked_lists/singly_linked_list.h"

void printList(const LinkedList *list)
{
    Node *current = list->head;

    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}

// Function to run tests for the singly linked list
void runLinkedListTests()
{
    // Initialize a linked list
    LinkedList myList;
    myList.head = NULL;

    // Test case 1: Insert nodes at the beginning of the linked list
    printf("Test Case 1: Insert nodes at the beginning\n");
    insertNode(&myList, 42);
    insertNode(&myList, 30);
    insertNode(&myList, 17);

    // Print the elements of the linked list
    printf("Linked List after insertion: ");
    printList(&myList);

    // Test case 2: Insert more nodes
    printf("\nTest Case 2: Insert more nodes\n");
    insertNode(&myList, 99);
    insertNode(&myList, 55);

    // Print the elements of the linked list
    printf("Linked List after additional insertion: ");
    printList(&myList);

    // Cleanup: Free the memory allocated for the nodes
    Node *current = myList.head;
    while (current != NULL)
    {
        Node *temp = current;
        current = current->next;
        free(temp);
    }
}

int main()
{
    // Run the linked list tests
    runLinkedListTests();

    return 0;
}
