#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

int main() {
    Node *head = NULL;
    Node *current = NULL;
    int size = 5;
    
    // Allocate memory dynamically for a linked list
    for (int i = 1; i <= size; i++) {
        Node *new_node = malloc(sizeof(Node));
        if (new_node == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }
        new_node->data = i;
        new_node->next = NULL;
        
        if (head == NULL) {
            head = new_node;
            current = new_node;
        } else {
            current->next = new_node;
            current = new_node;
        }
    }
    
    // Traverse the linked list and print the data in each node
    current = head;
    while (current != NULL) {
        current = current->next;
    }
    
    // Free the memory used by the linked list
    current = head;
    while (current != NULL) {
        Node *temp = current;
        current = current->next;
        free(temp);
    }
    
    return 0;
}
