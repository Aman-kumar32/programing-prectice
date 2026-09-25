
//finding feactorial of a number without using multiplication operator//


#include<stdio.h>
int main()
{
    int n,i,j, factorial=1,temp=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        temp = 0;
        for(j=1; j<=i; j++)
        {
            temp += factorial;
        }
        factorial = temp;
    }
    printf("Factorial of %d is %d", n, factorial);
    return 0;
}