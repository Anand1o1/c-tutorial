#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *head)
{
    struct node* ptr=head;
    while (ptr->next!=head)
    {
        printf("%d, ",ptr->data);
        ptr=ptr->next;
    }
    printf("%d",ptr->data);
    
    
}
struct node *deletionofvalue(struct node *head,int value){
    struct node *p=head;
    struct node *q=head->next;
    while (q->data!=value)
    {
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
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head->data = 9;
    head->next = second;
    second->data = 10;
    second->next = third;
    third->data = 15;
    third->next = fourth;
    fourth->data = 18;
    fourth->next = head;
    printf("\nthe LL before insertion :");
    traversal(head);
    printf("\nthe LL after insertion :");
    deletionofvalue(head,15);
    traversal(head);

    return 0;
}