#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct node *deletionofgivenvalue(struct node *head,int value)
{
    struct node *p = head;
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
    head->prev = NULL;
    second->data = 10;
    second->next = third;
    second->prev = head;
    third->data = 15;
    third->next = fourth;
    third->prev = second;
    fourth->data = 18;
    fourth->next = NULL;
    fourth->prev = third;
    printf("linked list before deletion:");
    traversal(head);
    printf("\nlinked list after deletion:");
    deletionofgivenvalue(head,10);
    traversal(head);

    return 0;
}