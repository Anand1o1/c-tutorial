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


struct node *insertinbetween(struct node *head,int index,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node * p=head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;

    }
    ptr->next=p->next;
    p->next=ptr;
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
    insertinbetween(head,2,56);
    traversal(head);


    return 0;
}