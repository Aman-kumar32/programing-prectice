// read n items into an array and compute the sum and average of the items//
#include <stdio.h>
int main()
{
    int arr[100],n,i,sum=0;
    float average;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d integers:\n ", n);
    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    average=(float)sum/n;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}