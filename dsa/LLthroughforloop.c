#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;

struct node *createLL(int arr[], int n)
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *temp, *q;
    head->data = arr[0];
    head->next = NULL;
    q = head;
    for (int i = 1; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->next = NULL;
        q->next=temp;
        q = temp;
    }
    return head;
}
void traversal(struct node *head)
{   
    struct node *p=head;
    while (p!= NULL)
    {
        printf("%d ", p->data);
        p=p->next;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    traversal(createLL(arr,5));

    return 0;
}