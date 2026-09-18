#include <stdio.h>
int main() {
    char operator;
    double a,b; 
    double result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (operator) {
        case '+':
            result = a + b;
            printf("sum of two numbers:%lf\n", result);
            break;
        case '-':
            result = a - b;
            printf("difference of two numbers:%lf\n", result);
            break;
        case '*':
            result = a * b;
            printf("product of two numbers:%lf\n", result);
            break;
        case '/':
            result = a / b;
            printf("quotient of two numbers:%lf\n", result);
            break;
        case '%':
            result = (int)a % (int)b;
            printf("modulus of two numbers:%lf\n", result);
            break;
        default:
            printf("Error! Operator is not correct.\n");
    }

    return 0;
}