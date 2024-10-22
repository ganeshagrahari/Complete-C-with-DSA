#include<stdio.h>
#include<stdlib.h>
//case1--> insert at the begining
//case2--> insert at the between
//case3--> insert at the end
//case4--> insert after the node
struct node{
    int data;
    struct node * next;
};
void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
//---------->inssert at first....

struct node * insertAtFirst(struct node *head, int data){
    struct node * ptr=  (struct node *)malloc(sizeof(struct node ));
    ptr ->next=head;
    ptr->data=data;
    return ptr;
}
//---->insert at between----------->
struct node * insertAtIndex(struct node *head,int data,int index){
    struct node * ptr=  (struct node *)malloc(sizeof(struct node ));
    struct node * p =head;
    int i =0;
    while(i!=index-1){
        p = p->next;
        i++;

    }
    ptr->data=data;
    ptr->next=p->next;
    p->next= ptr;
    return head;

}
//--->insert at the end....
struct node * insertAtEnd(struct node *head, int data){
    struct node * ptr=  (struct node *)malloc(sizeof(struct node ));
    ptr->data=data;
    struct node * p =head;

    while(p->next!=NULL){
        p=p->next;
    }
    
    p ->next=ptr;
    ptr->next =NULL;

    
    return head;
}
//--->insert after the node....
struct node * insertAtAfter(struct node *head,struct node *prevnode, int data){
    struct node * ptr=  (struct node *)malloc(sizeof(struct node ));
    ptr->data=data;


    ptr->next=prevnode->next;
    prevnode->next=ptr;
   

    
    
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
    printf("\n");
    //head=insertAtFirst(head,13);
    //head=insertAtIndex(head,13,2);
    //head=insertAtEnd(head,13);
    head=insertAtAfter(head,second,45);//insert after the node--->
    linkedListTraversal(head);

return 0;
}