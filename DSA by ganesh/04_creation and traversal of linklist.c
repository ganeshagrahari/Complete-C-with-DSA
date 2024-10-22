#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;
    // allocate memory for nodes in the linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    forth= (struct node *)malloc(sizeof(struct node));
    // link first and second node
    head->data = 7;
    head->next = second;
    // link second  and third node
    second->data = 11;
    second->next = third;
    // link second  and third node
    third->data = 55;
    third->next = forth;
    // terminate the list at the third node
    forth->data = 66;
    forth->next = NULL;
    linkedListTraversal(head);
}