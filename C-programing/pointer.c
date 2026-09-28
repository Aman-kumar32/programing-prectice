// Pointer: A pointer is a variable that stores the memory address of another variable. In C, pointers are used for dynamic memory allocation, arrays, and function arguments. The following code demonstrates the use of pointers in C.
// x is an integer variable
// p is a pointer variable that stores the address of x
#include<stdio.h>
int main()
{
    int x=10;
    int *p=&x;

    printf("x=%d\n",x);// x is 10
    printf("*p=%d\n",*p);// p stores the address of x, so *p gives the value of x
    printf("&x=%p\n",&x);// &x gives the address of x
    printf("p=%p\n",p);// p stores the address of x
    printf("&p=%p\n",&p);// &p gives the address of p
    return 0;
}