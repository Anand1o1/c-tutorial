#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *head)
{
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct node *createLL(int arr[], int n)
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = arr[0];
    head->next = NULL;
    struct node *p, *temp;
    p = head;
    for (int i = 1; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->next = NULL;
        p->next = temp;
        p = temp;
    }
    return head;
}
int main()
{
    int arr[5] = {3, 2, 5, 1, 6};
    traversal(createLL(arr, 5));

    return 0;
}