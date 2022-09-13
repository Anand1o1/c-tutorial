// find the largest and the smallest element in the LL;
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
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
void largesteleinLL(struct node *head){
    struct node *p=head;
    int largest=0;
    while (p!=NULL)
    {
        if (p->data>largest)
        {
            largest=p->data;
        }
        p=p->next;
        
        
    }
    printf("\nthe largest element in the LL is : %d",largest);
    
}
void smallesteleinLL(struct node *head){
    struct node *p=head;
    int smallest=head->data;
    while (p!=NULL)
    {
        if (p->data<smallest)
        {
            smallest=p->data;
        }
        p=p->next;
        
        
    }
    printf("\nthe smallest element in the LL is : %d",smallest);
    
}
void createLL(struct node *head, int arr[], int n)
{
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
}

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    int n;
    printf("enter the size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements in the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    createLL(head, arr, n);
    traversal(head);
    largesteleinLL(head);
    printf("\n");
    smallesteleinLL(head);

    return 0;
}