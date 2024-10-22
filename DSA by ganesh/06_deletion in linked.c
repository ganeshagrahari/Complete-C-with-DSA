

//case1--> Deleting then first node
//case2-->deleting with index
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
//case1--> Deleting then first node
struct node * deleteFirst(struct node * head){
    struct node * ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
//case2-->deleting with index
struct node * deleteAtIndex(struct node * head,int index){
    struct node * p=head;
    struct node * q=head->next;
 
    for (int i = 0;i<index-1;i++){
        p=p->next;
        q=q->next;

    }
    p->next=q->next;
    free(q);
    return head;

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
    head->data = 4;
    head->next = second;
    // link second  and third node
    second->data = 3;
    second->next = third;
    // link second  and third node
    third->data = 8;
    third->next = forth;
    // terminate the list at the third node
    forth->data = 1;
    forth->next = NULL;
    printf("linked list before deletion:  \n");
    linkedListTraversal(head);
    //head=deleteFirst(head);
    head=deleteAtIndex(head,2);
    printf("linked list after deletion:  \n");
    linkedListTraversal(head);
}
