// Q1)wap to sort the linked list using following  method :
// 1. ascending where the small elements of the list will move to the initial nodes one by one.
// 2.descending where large element of the list will move to the initial position one by one.
#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
void ascending(struct node *head)
{
    struct node *p = head,*q;
    int small;
    while (p != NULL)
    {
        q = p->next;
        while (q != NULL)
        {
            if (p->data > q->data)
            {
                small = p->data;
                p->data = q->data;
                q->data = small;
            }
            q = q->next;
        }
        p = p->next;
    }

    printf("\nThe LL after sorting in ascending order is :\n");
    traversal(head);
}
void descending(struct node *head)
{
    struct node *p = head,*q;
    int small;
    while (p != NULL)
    {
        q = p->next;
        while (q != NULL)
        {
            if (p->data < q->data)
            {
                small = p->data;
                p->data = q->data;
                q->data = small;
            }
            q = q->next;
        }
        p = p->next;
    }

    printf("\nThe LL after sorting in descending order is  :\n");
    traversal(head);
}
void createLL(struct node *head, int arr[], int size)
{
    struct node *p, *temp;
    head->data = arr[0];
    head->next = NULL;
    p = head;
    for (int i = 1; i < size; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->next = NULL;
        p->next = temp;
        p = temp;
    }
}

int main(int argc, char const *argv[])
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    printf("enter the size of ll :");
    int size;
    scanf("%d", &size);
    printf("\nenter elements in the array :");
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    createLL(head, arr, size);
    printf("\nLL befor sorting is:");
    traversal(head);
    ascending(head);
    printf("\n");
    descending(head);
    return 0;
}
