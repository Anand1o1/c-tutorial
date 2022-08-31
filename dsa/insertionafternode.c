#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertafternode(struct node *head,struct node *prevnode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;


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
    fourth->next = NULL;
    printf("linked list before insertion :");
    traversal(head);
    insertafternode(head,third, 12);
    printf("\nlinked list after insertion :");
    traversal(head);

    return 0;
}