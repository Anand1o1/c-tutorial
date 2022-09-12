#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
void traversal(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf(" ptr -> data %d\n", ptr->data);
        ptr = ptr->next;
    }
    
};
void creatLL(struct node *head, int *arr, int n)
{
    head->data = arr[0];
    // printf("%d , ", head->data);
    struct node *temp, *prev, *p;
    head->next = NULL;
    head->prev = NULL;
    p = head;
    for (int i = 1; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->next = NULL;
        temp->prev = p;
        p->next=temp;
        p=temp;
        //p = p->next;
        //printf("%d ,  ", temp->data);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    creatLL(head,arr,5);
    traversal(head);

    return 0;
}