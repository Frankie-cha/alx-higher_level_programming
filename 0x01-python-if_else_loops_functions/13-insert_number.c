#include <stdio.h>
#include "lists.h"
typedef struct listint_s 
{
    int n;
    struct listint_s *next;
} listint_t
listint_t *insert_node(listint_t **head, int number) 
{
    listint_t *new_node = malloc(sizeof(listint_t));
    if (new_node == NULL) 
    {
        return NULL;
    }
    new_node->n = number;
    new_node->next = NULL;
    if (*head == NULL || number < (*head)->n) 
    {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }
    listint_t *current = *head;
    while (current->next != NULL && current->next->n < number) 
    {
        current = current->next;
    }
    new_node->next = current->next;
    current->next = new_node;
    return new_node;
}
int main() 
{
    listint_t *head = NULL;
    insert_node(&head, 10);
    insert_node(&head, 20);
    insert_node(&head, 30);
    insert_node(&head, 25);
    listint_t *current = head;
    while (current != NULL) 
    {
        printf("%d ", current->n);
        current = current->next;
    }

    return 0;
}
