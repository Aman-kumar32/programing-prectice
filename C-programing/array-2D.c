// read and print elements of a 2D array
#include <stdio.h>
int main()
{
    int arr[10][10],r,c,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    printf("Enter the elements of the array:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The array elements are:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}