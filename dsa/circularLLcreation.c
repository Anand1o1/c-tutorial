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
    do
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);

    
};
void creatLL(struct node *head, int arr[], int n)
{
    head->data = arr[0];
    struct node *temp, *p;
    head->next = NULL;
    p = head;
    for (int i = 1; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->next = NULL;
        p->next = temp;
        p = temp;
        
        
    }
    temp->next=head;
    temp->data=arr[n-1];

}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    creatLL(head, arr, 5);
    traversal(head);

    return 0;
}