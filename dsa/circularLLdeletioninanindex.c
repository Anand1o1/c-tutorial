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
struct node *deletionLLdeletioninanindex(struct node *head,int index){
    struct node *p=head;
    struct node *q=head->next;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        q=q->next;
        i++;
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
    deletionLLdeletioninanindex(head,1);
    traversal(head);

    return 0;
}