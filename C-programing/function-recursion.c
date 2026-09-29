#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}
int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}
/*
5!= 5*4*3*2*1=120
4!= 4*3*2*1=24

n! = n*(n-1)! 
factorial(5)
5*factorial(4)
5*4*factorial(3)
5*4*3*factorial(2)
5*4*3*2*factorial(1)
5*4*3*2*1*factorial(0)
5*4*3*2*1*1
120
*/