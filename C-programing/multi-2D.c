//read two matrices and perform multiplication and addition of two matrices//
#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10],d[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    

    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &r2, &c2);

    if(c1 != r2)
    {
        printf("Matrix multiplication is not possible.");
        
        return 0;
    }

    printf("\nEnter elements of first matrix:\n");
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
        {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("\nEnter elements of second matrix:\n");
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
        {
            printf("Enter element b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }

    /* Matrix Multiplication */
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            c[i][j] = 0;
            for(k = 0; k < c1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // addition of two matrices
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            d[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nResultant Matrix:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    printf("\nAddition of two matrices:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("%d\t", d[i][j]);
        }
        printf("\n");
    }

    return 0;
}