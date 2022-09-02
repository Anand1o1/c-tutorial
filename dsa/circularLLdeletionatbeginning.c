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
struct node *deletionatbeginning(struct node *head){
    struct node *p=head;
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next=head->next;
    free(head);
    head=p->next;
    
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
    head=deletionatbeginning(head);
    traversal(head);

    return 0;
}