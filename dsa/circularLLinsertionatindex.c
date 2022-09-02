#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *head)
{
    struct node *p = head;
    while (p->next != head)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("%d", p->data);
    // do
    // {
    //     printf("%d ,",p->data);
    //     p=p->next;
    // } while (p!=head);
};
struct node *insertatindex(struct node *head, int index, int data)
{
    struct node *p = head;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
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
    insertatindex(head,2,69);
    traversal(head);

    return 0;
}