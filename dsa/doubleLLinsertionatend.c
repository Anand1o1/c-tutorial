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

struct node *insertattheend(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
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
    printf("linked list before insertion:");
    traversal(head);
    printf("\nlinked list after insetion :");
    insertattheend(head, 55);
    traversal(head);

    return 0;
}