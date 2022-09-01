#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *head)
{
    
    struct node *p=head;
    while (p->next != head)
    {
        printf("%d ", p->data);
        p=p->next;
    }
    printf("%d",p->data);
}
struct node *insertatfirst(struct node *head, int data)
{
    struct node *p=head->next;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    while (p->next!=head)
    {
        p=p->next;
    }
    
    p->next = ptr;
    ptr->next = head;
    head=ptr;
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

    traversal(head);
    head=insertatfirst(head, 80);
    printf("\n");
    traversal(head);

    return 0;
}