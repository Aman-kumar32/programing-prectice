#include<stdio.h>
#include<stdlib.h>// for malloc and free functions
int main()
{
    int *ptr;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));// memory allocated using malloc
    if(ptr == NULL) // check if memory has been allocated successfully
    {
        printf("Memory not allocated.\n");
        return 1; // exit the program if memory allocation fails
    }
    for(int i=0; i<n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("Element %d: %d\n", i+1, ptr[i]);
    }
    free(ptr); // free the allocated memory
    ptr = NULL; // set pointer to NULL after freeing
    return 0;
}