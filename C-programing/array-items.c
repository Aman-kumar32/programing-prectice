//read and print n items in an array//
#include<stdio.h>
int main()
{
    int arr[10],n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
