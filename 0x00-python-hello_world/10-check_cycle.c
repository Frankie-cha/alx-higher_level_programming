#include <stddef.h>
#include "lists.h"
{
int n;
struct listint_s *next;
};
/**
 * check_cycle - Checks if a singly linked list has a cycle.
 * @list: Pointer to the head of the linked list.
 * Description: function  that checks if a singly linked list has  cycle 
 * Return: 0 if there is no cycle, 1 if there is a cycle.
 */
int check_cycle(struct listint_s *lists)
{
struct listint_s *slow = list;
struct listint_s *fast = list;
while (slow != NULL && fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
return (1);
}
}
return (0);
}
