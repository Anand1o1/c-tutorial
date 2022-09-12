// wap to take a input of your name characterwise where each character shoulde be one node of the linklist
// implement the following function in the above list
// return the number of vowels
// return the number of word in the name
// display the odd position characters only
#include <stdio.h>
#include <stdlib.h>
struct node
{
    char data;
    struct node *next;
};
int vowel(struct node * head){
    struct node *ptr = head;
    int cnt = 0;
    while (ptr != NULL)
    {
        if(ptr -> data == 'a' || ptr -> data == 'e' || ptr -> data == 'i'|| ptr -> data == 'o'|| ptr -> data == 'u'){
            cnt++;
        }
        ptr = ptr->next;
    }
    return cnt;
}
void traversal(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf(" ptr -> data %c\n", ptr->data);
        ptr = ptr->next;
    }
    
};
void creatLL(struct node * head, char arr[], int n)
{
    
    struct node *p, *temp;
    printf("head data : %d", head->data);
    p = head;
    for (int i = 1; i <= n; i++)

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
    printf("enter the length of your name including space ");
    int n;
    scanf("%d",&n);
    char arr[n];
    
    head->next = NULL;
    printf("\nenter each letter of your name one by one also add space when needed\n");

    for (int i = 0; i <= n; i++)
    {
        scanf("%c",&arr[i]);
        printf("%c",arr[i]);
    }
    head->data = arr[0];
    creatLL(head, arr, n);
    traversal(head);
    int count_vowels = vowel(head);
    printf("vowel count: %d", count_vowels);
    return 0;
}
