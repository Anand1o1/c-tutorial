#include<stdio.h>
#include<stdlib.h>
int duplicate(int arr[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
                break;
            }
            
        }
        
    }
    return count;
    
}


int main()
{
    int arr[]={1,2,1,3,5,6,1};
    int n=sizeof(arr)/sizeof(int);
    int num=duplicate(arr,n);
    printf("the distinct element is : %d",num);
return 0;
}