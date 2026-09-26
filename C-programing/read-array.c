#include<stdio.h>
int main()
{
    int arr[10];
    int i,ch;
    printf("Enter 10 integers items:\n");
    for(i=0;i<10;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The elements of the array are:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}