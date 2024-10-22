#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void LinkedListTraversal(struct node *head){
    struct node *p=head;
   
    while(p !=NULL){
        printf("Element is : %d\n",p->data);
        p=p->next;
    }
    

}
int main(){
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
    head->prev=NULL;
    head->next = second;
    // link second  and third node
    second->data = 11;
    second->prev=head;
    second->next = third;
    // link second  and third node
    third->data = 55;
    third->prev=second;
    third->next = forth;
    // terminate the list at the third node
    forth->data = 66;
    third->prev=third;
    forth->next = NULL;
    printf("Doubly linked list:\n");
    LinkedListTraversal(head);
    return 0;
}